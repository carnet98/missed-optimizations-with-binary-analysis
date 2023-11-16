from setuptools import Extension, setup

setup(
    ext_modules=[
        Extension(
            name="dummy",
            sources=[],
            extra_objects=[
                "/home/colin/Dokumente/ETH/Master_Thesis/missed-optimizations-with-binary-analysis/clang_tools/build/src/CMakeFiles/global-detector.dir/GlobalDetector.cpp.o",
            ],
        ),
    ]
)
