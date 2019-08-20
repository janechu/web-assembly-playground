const express = require('express');
const serveIndex = require('serve-index');
const app = express();

app.use('/', express.static('./'))
app.use('/', serveIndex('./'))

app.listen(3000, () => console.log('App listening on port 3000!'));