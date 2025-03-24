QMK_LOCATION="/home/$USER/src/qmk_firmware"
CONTROLLER_TYPE="promicro_rp2040"
ID="usb-RPI_RP2_E0C9125B0D9B-0:0-part1"
DISK=/dev/disk/by-id/$ID

cp ./keymaps/$1 $QMK_LOCATION/keyboards/crkbd/keymaps/default -r -T

qmk compile -kb crkbd/rev1 -km default -e CONVERT_TO=$CONTROLLER_TYPE

cp $QMK_LOCATION/crkbd_rev1_*.uf2 .

if [[ ! -e $DISK ]]; then
    echo -n "Waiting for bootloader"
    until [[ -e $DISK ]]
    do
        echo -n .
        sleep 1
    done
fi

echo
sudo mount $DISK /flashing_mnt
sudo cp crkbd_rev1_*.uf2 /flashing_mnt

echo -n "Flashing"
until [[ ! -e /flashing_mnt/INDEX.HTM ]]
do 
    echo -n .
    sleep 1
done
echo
