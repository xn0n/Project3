# Project3 — небольшой пример STL

**Сортировка `std::vector` и разделение программы на два файла.**

Минимальный учебный console-проект на C++. Он демонстрирует вызов функции из другой единицы трансляции, использование `std::vector`, сортировку стандартной библиотекой и вывод результата.

`C++` · `STL` · `MSVC v143` · `Visual Studio 2022`

## Что делает программа

`File1.cpp` создаёт вектор `{5, 3, 1, 2, 4}`, сортирует его через `std::sort` и печатает элементы. `File2.cpp` содержит `main()` и вызывает функцию `sorting()`.

Ожидаемый вывод по исходному коду:

```text
1 2 3 4 5
```

Пример показывает базовый поток данных и линковку двух `.cpp`. Собственного алгоритма сортировки здесь нет: используется реализация STL.

## Сборка

Для существующего solution нужна Windows и **Visual Studio 2022** с Desktop development with C++, **MSVC v143** и Windows SDK 10.

Откройте `Project3.sln`, выберите `Debug | x64` и выполните Build Solution. Команда из Developer PowerShell for Visual Studio:

```powershell
msbuild Project3.sln /m /p:Configuration=Debug /p:Platform=x64
```

В solution также предусмотрены Win32 и Release. .NET Framework и C++/CLI этому проекту не нужны.

## Структура и статус

```text
File1.cpp                  функция sorting()
File2.cpp                  точка входа main()
Project3.sln                solution Visual Studio
Project3.vcxproj            параметры сборки
Project3.vcxproj.filters    группировка файлов в IDE
```

Это небольшой учебный эксперимент. Автоматизированного тестового проекта нет; сборка при подготовке публичной копии не запускалась. Локальные настройки IDE, кеши и бинарные результаты сборки исключены.
