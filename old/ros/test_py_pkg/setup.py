from setuptools import setup

package_name = 'test_py_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='senaex',
    maintainer_email='alexander.minor004@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "test_node = test_py_pkg.test_node:main",
            "test_publisher = test_py_pkg.test_publisher:main",
            "test_listener = test_py_pkg.test_listener:main",
            "test_server = test_py_pkg.test_server:main",
            "test_client_nop = test_py_pkg.test_client_nop:main",
            "test_client_op = test_py_pkg.test_client_op:main",
            "counter_publist = test_py_pkg.counter_publist:main",
        ],
    },
)
