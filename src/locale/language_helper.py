from src.locale.language_map import translations

global MAIN_WINDOW_TITLE, MAIN_WINDOW_MENU_EXIT_TITLE, MAIN_WINDOW_MENU_SETTINGS_TITLE, MAIN_WINDOW_MENU_ABOUT_TITLE
global MAIN_WINDOW_MENU_DOCUMMENTATION_TITLE, MENU_ABOUT_TAB_TITLE, MENU_ABOUT_TAB_MESSAGE, MENU_EXIT_TAB_TITLE
global MENU_EXIT_TAB_MESSAGE, SETTINGS_WINDOW_TITLE, SETTINGS_APPEARANCE_MODE_LABEL, SETTINGS_LANGUAGE_LABEL
global SETTINGS_SAVE_BUTTON_LABEL, SETTINGS_CANCEL_BUTTON_LABEL, MAIN_WINDOW_TAB_AREA_TITLE, MAIN_WINDOW_TAB_MESH_TITLE
global MAIN_WINDOW_TAB_MATH_MODEL_TITLE, MAIN_WINDOW_TAB_START_TITLE, AREA_TAB_MAIN_TITLE, AREA_TAB_BOUNDARY_CONDITION_LABEL_TEXT
global AREA_TAB_PRESETS_BUTTON_TEXT, AREA_TAB_FILE_BUTTON_TEXT, AREA_TAB_WRITE_FORMULA_BUTTON_TEXT, AREA_TAB_INPUT_FORMULA_BUTTON_TEXT
global AREA_TAB_INPUT_FORMULA_BUTTON_TITLE, AREA_TAB_MANUAL_INPUT_BUTTON_TEXT, AREA_TAB_BOUNDARY_CONDITION_BUTTON_TEXT, AREA_TAB_CLEAR_AREA_BUTTON_TEXT
global MESH_TAB_MESHING_OPTIONS_LABEL, MESH_TAB_MESHING_TYPE_LABEL, MESH_TAB_NODES_ORDER_LABEL, MESH_TAB_MINIMUM_ANGLE_LABEL
global MESH_TAB_MAXIMUM_AREA_LABEL, MESH_TAB_GENERATE_MESH_BUTTON_LABEL, MATH_MODEL_TAB_GENERAL_LABEL, MATH_MODEL_TAB_DIFFUSION_COEFFICIENT_LABEL
global MATH_MODEL_TAB_ADHESION_MEASURE_LABEL, MATH_MODEL_TAB_APOPTOSIS_MEASURE_LABEL, MATH_MODEL_TAB_SET_MODEL_BUTTON_LABEL
global START_TAB_GENERAL_LABEL, START_TAB_START_BUTTON_LABEL, START_TAB_AREA_SET_LABEL, START_TAB_MESH_SET_LABEL
global START_TAB_MODEL_SET_LABEL, START_TAB_DEFAULT_NOT_READY, START_TAB_DEFAUT_VALUE, START_TAB_DEFAULT_READY
global PRESETS_GENERAL_LABEL, PRESETS_SHAPE_LABEL, PRESETS_VALUES, PRESETS_POINTS_ON_BOUNDARY_LABEL, PRESETS_CREATE_BUTTON_LABEL
global PRESETS_GENERATE_ERROR_MESSAGE, DEFAULT_ERROR_MESSAGE, ADHESION_ERROR_MESSAGE, DIFFUSION_ERROR_MESSAGE
global APOPTOSIS_ERROR_MESSAGE, SET_AREA_ERROR_MESSAGE


def set_language(language):

    lang_dict = translations[language]

    MAIN_WINDOW_TITLE = lang_dict["MAIN_WINDOW_TITLE"]
    MAIN_WINDOW_MENU_EXIT_TITLE = lang_dict["MAIN_WINDOW_MENU_EXIT_TITLE"]
    MAIN_WINDOW_MENU_SETTINGS_TITLE = lang_dict["MAIN_WINDOW_MENU_SETTINGS_TITLE"]
    MAIN_WINDOW_MENU_ABOUT_TITLE = lang_dict["MAIN_WINDOW_MENU_ABOUT_TITLE"]
    MAIN_WINDOW_MENU_DOCUMMENTATION_TITLE = lang_dict[
        "MAIN_WINDOW_MENU_DOCUMMENTATION_TITLE"
    ]
    MENU_ABOUT_TAB_TITLE = lang_dict["MENU_ABOUT_TAB_TITLE"]
    MENU_ABOUT_TAB_MESSAGE = lang_dict["MENU_ABOUT_TAB_MESSAGE"]
    MENU_EXIT_TAB_TITLE = lang_dict["MENU_EXIT_TAB_TITLE"]
    MENU_EXIT_TAB_MESSAGE = lang_dict["MENU_EXIT_TAB_MESSAGE"]
    SETTINGS_WINDOW_TITLE = lang_dict["SETTINGS_WINDOW_TITLE"]
    SETTINGS_APPEARANCE_MODE_LABEL = lang_dict["SETTINGS_APPEARANCE_MODE_LABEL"]
    SETTINGS_LANGUAGE_LABEL = lang_dict["SETTINGS_LANGUAGE_LABEL"]
    SETTINGS_SAVE_BUTTON_LABEL = lang_dict["SETTINGS_SAVE_BUTTON_LABEL"]
    SETTINGS_CANCEL_BUTTON_LABEL = lang_dict["SETTINGS_CANCEL_BUTTON_LABEL"]
    MAIN_WINDOW_TAB_AREA_TITLE = lang_dict["MAIN_WINDOW_TAB_AREA_TITLE"]
    MAIN_WINDOW_TAB_MESH_TITLE = lang_dict["MAIN_WINDOW_TAB_MESH_TITLE"]
    MAIN_WINDOW_TAB_MATH_MODEL_TITLE = lang_dict["MAIN_WINDOW_TAB_MATH_MODEL_TITLE"]
    MAIN_WINDOW_TAB_START_TITLE = lang_dict["MAIN_WINDOW_TAB_START_TITLE"]
    AREA_TAB_MAIN_TITLE = lang_dict["AREA_TAB_MAIN_TITLE"]
    AREA_TAB_BOUNDARY_CONDITION_LABEL_TEXT = lang_dict[
        "AREA_TAB_BOUNDARY_CONDITION_LABEL_TEXT"
    ]
    AREA_TAB_PRESETS_BUTTON_TEXT = lang_dict["AREA_TAB_PRESETS_BUTTON_TEXT"]
    AREA_TAB_FILE_BUTTON_TEXT = lang_dict["AREA_TAB_FILE_BUTTON_TEXT"]
    AREA_TAB_WRITE_FORMULA_BUTTON_TEXT = lang_dict["AREA_TAB_WRITE_FORMULA_BUTTON_TEXT"]
    AREA_TAB_INPUT_FORMULA_BUTTON_TEXT = lang_dict["AREA_TAB_INPUT_FORMULA_BUTTON_TEXT"]
    AREA_TAB_INPUT_FORMULA_BUTTON_TITLE = lang_dict[
        "AREA_TAB_INPUT_FORMULA_BUTTON_TITLE"
    ]
    AREA_TAB_MANUAL_INPUT_BUTTON_TEXT = lang_dict["AREA_TAB_MANUAL_INPUT_BUTTON_TEXT"]
    AREA_TAB_BOUNDARY_CONDITION_BUTTON_TEXT = lang_dict[
        "AREA_TAB_BOUNDARY_CONDITION_BUTTON_TEXT"
    ]
    AREA_TAB_CLEAR_AREA_BUTTON_TEXT = lang_dict["AREA_TAB_CLEAR_AREA_BUTTON_TEXT"]
    MESH_TAB_MESHING_OPTIONS_LABEL = lang_dict["MESH_TAB_MESHING_OPTIONS_LABEL"]
    MESH_TAB_MESHING_TYPE_LABEL = lang_dict["MESH_TAB_MESHING_TYPE_LABEL"]
    MESH_TAB_NODES_ORDER_LABEL = lang_dict["MESH_TAB_NODES_ORDER_LABEL"]
    MESH_TAB_MINIMUM_ANGLE_LABEL = lang_dict["MESH_TAB_MINIMUM_ANGLE_LABEL"]
    MESH_TAB_MAXIMUM_AREA_LABEL = lang_dict["MESH_TAB_MAXIMUM_AREA_LABEL"]
    MESH_TAB_GENERATE_MESH_BUTTON_LABEL = lang_dict[
        "MESH_TAB_GENERATE_MESH_BUTTON_LABEL"
    ]
    MATH_MODEL_TAB_GENERAL_LABEL = lang_dict["MATH_MODEL_TAB_GENERAL_LABEL"]
    MATH_MODEL_TAB_DIFFUSION_COEFFICIENT_LABEL = lang_dict[
        "MATH_MODEL_TAB_DIFFUSION_COEFFICIENT_LABEL"
    ]
    MATH_MODEL_TAB_ADHESION_MEASURE_LABEL = lang_dict[
        "MATH_MODEL_TAB_ADHESION_MEASURE_LABEL"
    ]
    MATH_MODEL_TAB_APOPTOSIS_MEASURE_LABEL = lang_dict[
        "MATH_MODEL_TAB_APOPTOSIS_MEASURE_LABEL"
    ]
    MATH_MODEL_TAB_SET_MODEL_BUTTON_LABEL = lang_dict[
        "MATH_MODEL_TAB_SET_MODEL_BUTTON_LABEL"
    ]
    START_TAB_GENERAL_LABEL = lang_dict["START_TAB_GENERAL_LABEL"]
    START_TAB_START_BUTTON_LABEL = lang_dict["START_TAB_START_BUTTON_LABEL"]
    START_TAB_AREA_SET_LABEL = lang_dict["START_TAB_AREA_SET_LABEL"]
    START_TAB_MESH_SET_LABEL = lang_dict["START_TAB_MESH_SET_LABEL"]
    START_TAB_MODEL_SET_LABEL = lang_dict["START_TAB_MODEL_SET_LABEL"]
    START_TAB_DEFAULT_NOT_READY = lang_dict["START_TAB_DEFAULT_NOT_READY"]
    START_TAB_DEFAUT_VALUE = lang_dict["START_TAB_DEFAUT_VALUE"]
    START_TAB_DEFAULT_READY = lang_dict["START_TAB_DEFAULT_READY"]
    PRESETS_GENERAL_LABEL = lang_dict["PRESETS_GENERAL_LABEL"]
    PRESETS_SHAPE_LABEL = lang_dict["PRESETS_SHAPE_LABEL"]
    PRESETS_VALUES = lang_dict["PRESETS_VALUES"]
    PRESETS_POINTS_ON_BOUNDARY_LABEL = lang_dict["PRESETS_POINTS_ON_BOUNDARY_LABEL"]
    PRESETS_CREATE_BUTTON_LABEL = lang_dict["PRESETS_CREATE_BUTTON_LABEL"]
    PRESETS_GENERATE_ERROR_MESSAGE = lang_dict["PRESETS_GENERATE_ERROR_MESSAGE"]
    DEFAULT_ERROR_MESSAGE = lang_dict["DEFAULT_ERROR_MESSAGE"]
    ADHESION_ERROR_MESSAGE = lang_dict["ADHESION_ERROR_MESSAGE"]
    DIFFUSION_ERROR_MESSAGE = lang_dict["DIFFUSION_ERROR_MESSAGE"]
    APOPTOSIS_ERROR_MESSAGE = lang_dict["APOPTOSIS_ERROR_MESSAGE"]
    SET_AREA_ERROR_MESSAGE = lang_dict["SET_AREA_ERROR_MESSAGE"]
