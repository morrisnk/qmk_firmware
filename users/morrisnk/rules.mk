SRC += $(USER_PATH)/rgb.c \
       $(USER_PATH)/process_records.c \
       $(USER_PATH)/tapdance.c

TAP_DANCE_ENABLE = yes

ifneq ($(strip $(NO_SECRETS)), yes)
    ifneq ("$(wildcard $(USER_PATH)/secrets.c)","")
        SRC += secrets.c
    endif
endif
