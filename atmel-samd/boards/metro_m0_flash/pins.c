#include "pins.h"
#include "asf/sam0/drivers/system/system.h"

PIN(PA02, true, ADC_POSITIVE_INPUT_PIN0, NO_TIMER, NO_TIMER, NO_SERCOM,
    NO_SERCOM);
PIN(PB08, true, ADC_POSITIVE_INPUT_PIN2,
  TIMER(TC4, 0, 0, 0, PIN_PB08E_TC4_WO0, MUX_PB08E_TC4_WO0),
  NO_TIMER,
  SERCOM(SERCOM4, 0, PINMUX_PB08D_SERCOM4_PAD0),
  NO_SERCOM);
PIN(PB09, true, ADC_POSITIVE_INPUT_PIN3,
  TIMER(TC4, 0, 1, 1, PIN_PB09E_TC4_WO1, MUX_PB09E_TC4_WO1),
  NO_TIMER,
  SERCOM(SERCOM4, 1, PINMUX_PB09D_SERCOM4_PAD1),
  NO_SERCOM);
PIN(PA04, true, ADC_POSITIVE_INPUT_PIN4,
  TIMER(0, TCC0, 0, 0, PIN_PA04E_TCC0_WO0, MUX_PA04E_TCC0_WO0),
  NO_TIMER,
  SERCOM(SERCOM0, 0, PINMUX_PA04D_SERCOM0_PAD0),
  NO_SERCOM);
PIN(PA05, true, ADC_POSITIVE_INPUT_PIN5,
  TIMER(0, TCC0, 1, 1, PIN_PA05E_TCC0_WO1, MUX_PA05E_TCC0_WO1),
  NO_TIMER,
  SERCOM(SERCOM0, 1, PINMUX_PA05D_SERCOM0_PAD1),
  NO_SERCOM);
PIN(PB02, true, ADC_POSITIVE_INPUT_PIN10,
  NO_TIMER,
  NO_TIMER,
  SERCOM(SERCOM5, 0, PINMUX_PB02D_SERCOM5_PAD0),
  NO_SERCOM);
PIN(PA11, true, ADC_POSITIVE_INPUT_PIN19,
  TIMER(0, TCC1, 1, 1, PIN_PA11E_TCC1_WO1, MUX_PA11E_TCC1_WO1),
  TIMER(0, TCC0, 3, 3, PIN_PA11F_TCC0_WO3, MUX_PA11F_TCC0_WO3),
  SERCOM(SERCOM0, 3, PINMUX_PA11C_SERCOM0_PAD3),
  SERCOM(SERCOM2, 3, PINMUX_PA11D_SERCOM2_PAD3));
PIN(PA10, true, ADC_POSITIVE_INPUT_PIN18,
  TIMER(0, TCC1, 0, 0, PIN_PA10E_TCC1_WO0, MUX_PA10E_TCC1_WO0),
  TIMER(0, TCC0, 2, 2, PIN_PA10F_TCC0_WO2, MUX_PA10F_TCC0_WO2),
  SERCOM(SERCOM0, 2, PINMUX_PA10C_SERCOM0_PAD2),
  SERCOM(SERCOM2, 2, PINMUX_PA10D_SERCOM2_PAD2));
PIN(PA14, false, NO_ADC_INPUT,
  TIMER(TC3, 0, 0, 0, PIN_PA14E_TC3_WO0, MUX_PA14E_TC3_WO0),
  TIMER(0, TCC0, 0, 4, PIN_PA14F_TCC0_WO4, MUX_PA14F_TCC0_WO4),
  SERCOM(SERCOM2, 2, PINMUX_PA14C_SERCOM2_PAD2),
  SERCOM(SERCOM4, 2, PINMUX_PA14D_SERCOM4_PAD2));
PIN(PA09, true, ADC_POSITIVE_INPUT_PIN17,
  TIMER(0, TCC0, 1, 1, PIN_PA09E_TCC0_WO1, MUX_PA09E_TCC0_WO1),
  TIMER(0, TCC1, 3, 3, PIN_PA09F_TCC1_WO3, MUX_PA09F_TCC1_WO3),
  SERCOM(SERCOM0, 1, PINMUX_PA09C_SERCOM0_PAD1),
  SERCOM(SERCOM2, 1, PINMUX_PA09D_SERCOM2_PAD1));
PIN(PA08, true, ADC_POSITIVE_INPUT_PIN16,
  TIMER(0, TCC0, 0, 0, PIN_PA08E_TCC0_WO0, MUX_PA08E_TCC0_WO0),
  TIMER(0, TCC1, 2, 2, PIN_PA08F_TCC1_WO2, MUX_PA08F_TCC1_WO2),
  SERCOM(SERCOM0, 0, PINMUX_PA08C_SERCOM0_PAD0),
  SERCOM(SERCOM2, 0, PINMUX_PA08D_SERCOM2_PAD0));
PIN(PA15, false, NO_ADC_INPUT,
  TIMER(TC3, 0, 1, 1, PIN_PA15E_TC3_WO1, MUX_PA15E_TC3_WO1),
  TIMER(0, TCC0, 1, 5, PIN_PA15F_TCC0_WO5, MUX_PA15F_TCC0_WO5),
  SERCOM(SERCOM2, 3, PINMUX_PA15C_SERCOM2_PAD3),
  SERCOM(SERCOM4, 3, PINMUX_PA15D_SERCOM4_PAD3));
PIN(PA20, false, NO_ADC_INPUT,
  TIMER(0, TCC0, 2, 6, PIN_PA20F_TCC0_WO6, MUX_PA20F_TCC0_WO6),
  NO_TIMER,
  SERCOM(SERCOM5, 2, PINMUX_PA20C_SERCOM5_PAD2),
  SERCOM(SERCOM3, 2, PINMUX_PA20D_SERCOM3_PAD2));
PIN(PA21, false, NO_ADC_INPUT,
  TIMER(0, TCC0, 3, 7, PIN_PA21F_TCC0_WO7, MUX_PA21F_TCC0_WO7),
  NO_TIMER,
  SERCOM(SERCOM5, 3, PINMUX_PA21C_SERCOM5_PAD3),
  SERCOM(SERCOM3, 3, PINMUX_PA21D_SERCOM3_PAD3));
PIN(PA06, true, ADC_POSITIVE_INPUT_PIN6,
  TIMER(0, TCC1, 0, 0, PIN_PA06E_TCC1_WO0, MUX_PA06E_TCC1_WO0),
  NO_TIMER,
  SERCOM(SERCOM0, 2, PINMUX_PA06D_SERCOM0_PAD2),
  NO_SERCOM);
PIN(PA07, true, ADC_POSITIVE_INPUT_PIN7,
  TIMER(0, TCC1, 1, 1, PIN_PA07E_TCC1_WO1, MUX_PA07E_TCC1_WO1),
  NO_TIMER,
  SERCOM(SERCOM0, 3, PINMUX_PA07D_SERCOM0_PAD3),
  NO_SERCOM);
PIN(PA18, false, NO_ADC_INPUT,
  TIMER(TC3, 0, 0, 0, PIN_PA18E_TC3_WO0, MUX_PA18E_TC3_WO0),
  TIMER(0, TCC0, 2, 2, PIN_PA18F_TCC0_WO2, MUX_PA18F_TCC0_WO2),
  SERCOM(SERCOM1, 2, PINMUX_PA18C_SERCOM1_PAD2),
  SERCOM(SERCOM3, 2, PINMUX_PA18D_SERCOM3_PAD2));
PIN(PA16, false, NO_ADC_INPUT,
  TIMER(0, TCC2, 0, 0, PIN_PA16E_TCC2_WO0, MUX_PA16E_TCC2_WO0),
  TIMER(0, TCC0, 2, 6, PIN_PA16F_TCC0_WO6, MUX_PA16F_TCC0_WO6),
  SERCOM(SERCOM1, 0, PINMUX_PA16C_SERCOM1_PAD0),
  SERCOM(SERCOM3, 0, PINMUX_PA16D_SERCOM3_PAD0));
PIN(PA19, false, NO_ADC_INPUT,
  TIMER(TC3, 0, 1, 1, PIN_PA19E_TC3_WO1, MUX_PA19E_TC3_WO1),
  TIMER(0, TCC0, 3, 3, PIN_PA19F_TCC0_WO3, MUX_PA19F_TCC0_WO3),
  SERCOM(SERCOM1, 3, PINMUX_PA19C_SERCOM1_PAD3),
  SERCOM(SERCOM3, 3, PINMUX_PA19D_SERCOM3_PAD3));
PIN(PA17, false, NO_ADC_INPUT,
  TIMER(0, TCC2, 1, 1, PIN_PA17E_TCC2_WO1, MUX_PA17E_TCC2_WO1),
  TIMER(0, TCC0, 3, 7, PIN_PA17F_TCC0_WO7, MUX_PA17F_TCC0_WO7),
  SERCOM(SERCOM1, 1, PINMUX_PA17C_SERCOM1_PAD1),
  SERCOM(SERCOM3, 1, PINMUX_PA17D_SERCOM3_PAD1));
PIN(PA22, false, NO_ADC_INPUT,
  TIMER(TC4, 0, 0, 0, PIN_PA22E_TC4_WO0, MUX_PA22E_TC4_WO0),
  TIMER(0, TCC0, 0, 4, PIN_PA22F_TCC0_WO4, MUX_PA22F_TCC0_WO4),
  SERCOM(SERCOM3, 0, PINMUX_PA22C_SERCOM3_PAD0),
  SERCOM(SERCOM5, 0, PINMUX_PA22D_SERCOM5_PAD0));
PIN(PA23, false, NO_ADC_INPUT,
  TIMER(TC4, 0, 1, 1, PIN_PA23E_TC4_WO1, MUX_PA23E_TC4_WO1),
  TIMER(0, TCC0, 1, 5, PIN_PA23F_TCC0_WO5, MUX_PA23F_TCC0_WO5),
  SERCOM(SERCOM3, 1, PINMUX_PA23C_SERCOM3_PAD1),
  SERCOM(SERCOM5, 1, PINMUX_PA23C_SERCOM3_PAD1));
PIN(PB11, false, NO_ADC_INPUT,
  TIMER(TC5, 0, 1, 1, PIN_PB11E_TC5_WO1, MUX_PB11E_TC5_WO1),
  TIMER(0, TCC0, 1, 5, PIN_PB11F_TCC0_WO5, MUX_PB11F_TCC0_WO5),
  SERCOM(SERCOM4, 3, PINMUX_PB11D_SERCOM4_PAD3),
  NO_SERCOM);
PIN(PB10, false, NO_ADC_INPUT,
  TIMER(TC5, 0, 0, 0, PIN_PA23E_TC4_WO1, MUX_PA23E_TC4_WO1),
  TIMER(0, TCC0, 0, 4, PIN_PA23F_TCC0_WO5, MUX_PA23F_TCC0_WO5),
  SERCOM(SERCOM4, 2, PINMUX_PB10D_SERCOM4_PAD2),
  NO_SERCOM);
PIN(PA12, false, NO_ADC_INPUT,
  TIMER(0, TCC2, 0, 0, PIN_PA12E_TCC2_WO0, MUX_PA12E_TCC2_WO0),
  TIMER(0, TCC0, 2, 6, PIN_PA12F_TCC0_WO6, MUX_PA12F_TCC0_WO6),
  SERCOM(SERCOM4, 0, PINMUX_PA12D_SERCOM4_PAD0),
  SERCOM(SERCOM2, 0, PINMUX_PA12C_SERCOM2_PAD0));
PIN(PA13, false, NO_ADC_INPUT,
  TIMER(0, TCC2, 1, 1, PIN_PA13E_TCC2_WO1, MUX_PA13E_TCC2_WO1),
  TIMER(0, TCC0, 3, 7, PIN_PA13F_TCC0_WO7, MUX_PA13F_TCC0_WO7),
  SERCOM(SERCOM4, 1, PINMUX_PA13D_SERCOM4_PAD1),
  SERCOM(SERCOM2, 1, PINMUX_PA13C_SERCOM2_PAD1));

STATIC const mp_map_elem_t pin_cpu_pins_locals_dict_table[] = {
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA02), (mp_obj_t)&pin_PA02 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB08), (mp_obj_t)&pin_PB08 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB09), (mp_obj_t)&pin_PB09 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA04), (mp_obj_t)&pin_PA04 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA05), (mp_obj_t)&pin_PA05 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB02), (mp_obj_t)&pin_PB02 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA11), (mp_obj_t)&pin_PA11 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA10), (mp_obj_t)&pin_PA10 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA14), (mp_obj_t)&pin_PA14 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA09), (mp_obj_t)&pin_PA09 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA08), (mp_obj_t)&pin_PA08 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA15), (mp_obj_t)&pin_PA15 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA20), (mp_obj_t)&pin_PA20 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA21), (mp_obj_t)&pin_PA21 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA06), (mp_obj_t)&pin_PA06 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA07), (mp_obj_t)&pin_PA07 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA18), (mp_obj_t)&pin_PA18 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA16), (mp_obj_t)&pin_PA16 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA19), (mp_obj_t)&pin_PA19 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA17), (mp_obj_t)&pin_PA17 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA22), (mp_obj_t)&pin_PA22 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA23), (mp_obj_t)&pin_PA23 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB11), (mp_obj_t)&pin_PB11 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PB10), (mp_obj_t)&pin_PB10 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA12), (mp_obj_t)&pin_PA12 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_PA13), (mp_obj_t)&pin_PA13 },
};
MP_DEFINE_CONST_DICT(pin_cpu_pins_locals_dict, pin_cpu_pins_locals_dict_table);

STATIC const mp_map_elem_t pin_board_pins_locals_dict_table[] = {
  { MP_OBJ_NEW_QSTR(MP_QSTR_A0), (mp_obj_t)&pin_PA02 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A1), (mp_obj_t)&pin_PB08 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A2), (mp_obj_t)&pin_PB09 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A3), (mp_obj_t)&pin_PA04 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A4), (mp_obj_t)&pin_PA05 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_A5), (mp_obj_t)&pin_PB02 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D0), (mp_obj_t)&pin_PA11 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_RX), (mp_obj_t)&pin_PA11 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D1), (mp_obj_t)&pin_PA10 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_TX), (mp_obj_t)&pin_PA10 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D2), (mp_obj_t)&pin_PA14 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D3), (mp_obj_t)&pin_PA09 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D4), (mp_obj_t)&pin_PA08 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D5), (mp_obj_t)&pin_PA15 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D6), (mp_obj_t)&pin_PA20 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D7), (mp_obj_t)&pin_PA21 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D8), (mp_obj_t)&pin_PA06 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D9), (mp_obj_t)&pin_PA07 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D10), (mp_obj_t)&pin_PA18 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D11), (mp_obj_t)&pin_PA16 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D12), (mp_obj_t)&pin_PA19 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_D13), (mp_obj_t)&pin_PA17 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_SDA), (mp_obj_t)&pin_PA22 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_SCL), (mp_obj_t)&pin_PA23 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_FLASH_SCK),  (mp_obj_t)&pin_PB11 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_FLASH_MOSI), (mp_obj_t)&pin_PB10 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_FLASH_MISO), (mp_obj_t)&pin_PA12 },
  { MP_OBJ_NEW_QSTR(MP_QSTR_FLASH_CS),   (mp_obj_t)&pin_PA13 },
};
MP_DEFINE_CONST_DICT(pin_board_pins_locals_dict, pin_board_pins_locals_dict_table);
