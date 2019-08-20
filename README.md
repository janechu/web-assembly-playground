# Optimizing for Web Assembly

These are some tests to look at package size and performance for code that could be executed in Web Assembly vs JS.

## Setting up your environment

Aside from the usual suspects for web development (NodeJS, npm, git) you will need:
- [emscripten](https://emscripten.org/docs/getting_started/downloads.html)
    - please note that in order to prevent having to declare the path everytime you open a new terminal (or command line), you will need to go into your `.bashrc` and update your PATH variable. There is a thread with details on there [here](https://github.com/emscripten-core/emscripten/issues/5696#issuecomment-338588884) and a stackexchange on adding PATH variables to your `.bashrc` [here](https://unix.stackexchange.com/questions/260941/add-path-to-bashrc).
- `npm install`

## Running the test environment

Use `npm start` to start the express server, it will be at http://localhost:3000. The `server.js` file points to the root of this directory so you can just navigate to any generated `.html` files in the browser.

## Folder structure

The `c-lang/` folder is being used for all C files.
The `js-lang/` folder is being used for all JS files.

The idea here is to create code for both to see how well they perform against each other. Therefore if I create `loop.js` in the `js-lang/` folder, I should also create `loop.c` in the `c-lang/` folder.

## Compiling for Web Assembly

The suggested method to create new C or C++ web assembly tests is:
- `cd c-lang`
- `emcc file-name.c -Os -s WASM=1 -o file-name.html --shell-file ../shell.html`

See [this article](https://hacks.mozilla.org/2018/01/shrinking-webassembly-and-javascript-code-sizes-in-emscripten/) for details on how these options shrink the size of the output code.
