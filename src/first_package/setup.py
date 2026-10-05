# ---------------------------------------------------------
#   first_package/setup.py
# ---------------------------------------------------------

import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'first_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        # Package‑resource marker (required by ament)
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),

        # The package.xml file
        ('share/' + package_name, ['package.xml']),

        # -------------------------------------------------
        # 1️⃣ Your own launch files (stored in launchfiles/)
        # -------------------------------------------------
        (os.path.join('share', package_name, 'launch'),
            glob(os.path.join('launchfiles', '*launch.[pxy][yma]*'))),

        # -------------------------------------------------
        # 2️⃣ TurtleBot 4 simulator launch files
        # -------------------------------------------------
        # Use an absolute path (based on the location of this file) so the
        # glob works regardless of the current working directory.
        (os.path.join('share', package_name, 'turtlebot4_simulator', 'launch'),
            glob(os.path.abspath(os.path.join(
                os.path.dirname(__file__),   # directory containing this setup.py
                '..',                        # go up to the workspace root
                'turtlebot4_simulator',
                'turtlebot4_ignition_bringup',
                'launch',
                '*launch.[pxy][yma]*')))),
    ],

    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='vboxuser',
    maintainer_email='vboxuser@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },

    entry_points={
        'console_scripts': [
            'first_publisher = first_package.first_node:main',
            'first_subscriber = first_package.second_node:main',
            'cstm_msg = first_package.custommsg:main',
            'cstm_srv_server = first_package.servernode:main',
            'cstm_srv_client = first_package.clientnode:main',
            'fibonacci_action_client = first_package.action_clientNode:main',
            'fibonacci_action_server = first_package.action_serverNode:main',
        ],
    },
)
# ---------------------------------------------------------