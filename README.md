## Deprecation note!

**Please note: This repository is deprecated and it is no longer actively maintained**.

## mbed OS NTP Client Example

This is an example application shows how to use NTP servers in mbed OS. It uses the library found here: https://github.com/ARMmbed/ntp-client.

The example currently uses the [EthernetInterface](https://docs.mbed.com/docs/mbed-os-api-reference/en/latest/APIs/communication/ethernet/), however it is compatible with any [NetworkInterface](https://docs.mbed.com/docs/mbed-os-api-reference/en/latest/APIs/communication/communication_index/) supported by mbed OS.

## Get started

Import the application with [mbed CLI](https://github.com/ARMmbed/mbed-cli).

```sh
mbed import https://github.com/ARMmbed/ntp-client-example
cd ntp-client-example
```

Now compile the example. For instance, this would compile the application for the K64F with the ARM GCC toolchain.

```sh
mbed compile -m K64F -t GCC_ARM
```

The binary should now be available in the `BUILD` folder.

## License

The software is provided under the [Apache-2.0 license](LICENSE). Contributions to this project are accepted under the same license.
