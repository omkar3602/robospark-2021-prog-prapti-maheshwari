from enigma.machine import EnigmaMachine

# setup machine according to specs from a daily key sheet:

machine = EnigmaMachine.from_key_sheet(
       rotors='I II III',
       reflector='B',
       ring_settings=[1, 20, 11],
       plugboard_settings='AV BS CG DL FU HZ IN KM OW RX')


for i in range(65, 91):
    for j in range(65, 91):
        for k in range(65, 91):
            config = chr(i) + chr(j) + chr(k)

            machine.set_display(config)

            ciphertext = 'FKYCEPWYRXTXDHYGUPNG'
            plaintext = machine.process_text(ciphertext)

            if(plaintext == "THISISNOTGONNABEEASY"):
                # print(plaintext)
                # print(i, j, k)
                # print(config)
                machine.set_display(config)
                ciphertext1 = "DPIWPOLLFEUPIKAKLQLC"
                plaintext1 = machine.process_text(ciphertext1)
                print(plaintext1)
                break