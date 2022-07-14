const fetch = require('node-fetch');
const Excel = require('exceljs');

async function exTest() {
    const workbook = new Excel.Workbook();
    const worksheet = workbook.addWorksheet('My Sheet');

    worksheet.columns = [
        { header: 'Id', key: 'id', width: 10 },
        { header: 'Name', key: 'name', width: 32 },
        { header: 'Rating', key: 'rating', width: 15 },
    ];

    await fetch(
            'https://codeforces.com/api/user.info?handles=ht266;Fefer_Ivan;CTarget'
        )
        .then((rresponse) => rresponse.json())
        .then((data) => data.result)
        .then(function(dt) {
            console.log('ok');
            for (var i = 0; i < dt.length; i++)
                worksheet.addRow({ id: 1, name: dt[i].handle, rating: dt[i].rating });
        });

    await workbook.xlsx.writeFile('export.xlsx');

    console.log('File is written');
}

exTest();