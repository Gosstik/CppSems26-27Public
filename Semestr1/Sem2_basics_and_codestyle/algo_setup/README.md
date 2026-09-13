# TLDR

## Ссылки

Кодстайл по алгосам: <https://docs.google.com/document/d/1HmFPnUPKfx8fXtU_rNm0lWzMwo7zr7RdCfAHbAMedjo/edit?tab=t.0>
Все возможные опции `.clang-format` можно посмотреть [по ссылке](https://clang.llvm.org/docs/ClangFormatStyleOptions.html)

## clangd

- Проверить, что стоит расширение `llvm-vs-code-extensions.vscode-clangd`
- Создать `.clangd` и вставить содержимое из [.clangd](./.clangd)
- Перезагрузить ide (palette -> reload window) или clangd (palette -> clangd: Restart language server)
- Проверить, что всё работает: написать в файле `int main() { int x; }` &mdash; должно отображать ошибку `Unused variable 'x'`

## clang-format

- Проверить, что стоит расширение `xaver.clang-format`
- Создать `.clang-format` и вставить содержимое из [.clang-format](.clang-format)
- Посмотреть (или поменять) шорткат, чтобы форматировать прямо в ide: settings -> Keyboard Shortcuts -> в поиске вбить "Format Document"
- Перезагрузить ide (palette -> reload window) или clangd (palette -> clangd: Restart language server)
- Проверить, что всё работает: добавить строку "IndentWidth: 4" в `.clang-format` и применить шорткат - отступы в файле должны быть длины 4 (по дефолту 2)

## clang-tidy

- Проверить, что стоит расширение `llvm-vs-code-extensions.vscode-clangd`
- Создать файл `.clang-tidy` и вставить содержимое из [.clang-tidy](./.clang-tidy)
- Перезагрузить ide (palette -> reload window) или clangd (palette -> clangd: Restart language server)
- Проверить, что всё работает: создать функцию `void foo() {}` &mdash; в редакторе должна подсвечиваться ошибка `Invalid case style for function 'foo'`, должно предлагать заменить на `Foo()`
