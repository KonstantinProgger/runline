project('runline', ['cpp'], version : '1.0.2', default_options : ['cpp_std=c++11'])

qt5_dep = dependency('qt5', modules: ['Core', 'Gui', 'Widgets'])
qt5 = import('qt5')

source_root = meson.source_root()
source_dir = include_directories('source/')
resource_dir = 'resource/'

runline_source = [
    'source/main.cpp',
    'source/styles.hpp',
    'source/mainwindow.hpp',
    'source/mainwindow.cpp',
    'source/orientbutton.hpp',
    'source/orientbutton.cpp'
]

runline_resource = [
    qt5.preprocess(
    moc_headers : 'source/mainwindow.hpp',
    ui_files : 'resource/mainwindow.ui',
    qresources : 'resource/image_sources.qrc',
    dependencies: [qt5_dep])
]

executable('runline',
    [runline_source, runline_resource],
    include_directories : [source_dir, resource_dir],
    dependencies : [qt5_dep]
)
