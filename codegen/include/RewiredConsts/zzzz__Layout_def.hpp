#pragma once
// IWYU pragma private; include "RewiredConsts/Layout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Layout)
namespace RewiredConsts {
class Layout_CustomController;
}
namespace RewiredConsts {
class Layout_Joystick;
}
namespace RewiredConsts {
class Layout_Keyboard;
}
namespace RewiredConsts {
class Layout_Mouse;
}
// Forward declare root types
namespace RewiredConsts {
class Layout;
}
namespace RewiredConsts {
class Layout_CustomController;
}
namespace RewiredConsts {
class Layout_Joystick;
}
namespace RewiredConsts {
class Layout_Keyboard;
}
namespace RewiredConsts {
class Layout_Mouse;
}
// Write type traits
MARK_REF_T(::RewiredConsts::Layout*);
MARK_REF_T(::RewiredConsts::Layout_CustomController*);
MARK_REF_T(::RewiredConsts::Layout_Joystick*);
MARK_REF_T(::RewiredConsts::Layout_Keyboard*);
MARK_REF_T(::RewiredConsts::Layout_Mouse*);
DEFINE_IL2CPP_CLASS(::RewiredConsts::Layout*, "RewiredConsts", "Layout");
DEFINE_IL2CPP_CLASS(::RewiredConsts::Layout_CustomController*, "RewiredConsts", "Layout/CustomController");
DEFINE_IL2CPP_CLASS(::RewiredConsts::Layout_Joystick*, "RewiredConsts", "Layout/Joystick");
DEFINE_IL2CPP_CLASS(::RewiredConsts::Layout_Keyboard*, "RewiredConsts", "Layout/Keyboard");
DEFINE_IL2CPP_CLASS(::RewiredConsts::Layout_Mouse*, "RewiredConsts", "Layout/Mouse");
// Dependencies System.Object
namespace RewiredConsts {
// Is value type: false
// CS Name: RewiredConsts.Layout/Joystick
class CORDL_TYPE Layout_Joystick : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Layout_Joystick() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Layout_Joystick", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Layout_Joystick(Layout_Joystick && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Layout_Joystick", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Layout_Joystick(Layout_Joystick const& ) = delete;

/// @brief Field Default offset 0xffffffff size 0x4
static constexpr int32_t  Default{static_cast<int32_t>(0x0)};

/// @brief Field NMouseL offset 0xffffffff size 0x4
static constexpr int32_t  NMouseL{static_cast<int32_t>(0x3)};

/// @brief Field NMouseR offset 0xffffffff size 0x4
static constexpr int32_t  NMouseR{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5796};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::RewiredConsts::Layout_Joystick) == 0x10, "Size mismatch!");

} // namespace end def RewiredConsts
// Dependencies System.Object
namespace RewiredConsts {
// Is value type: false
// CS Name: RewiredConsts.Layout/Keyboard
class CORDL_TYPE Layout_Keyboard : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Layout_Keyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Layout_Keyboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Layout_Keyboard(Layout_Keyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Layout_Keyboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Layout_Keyboard(Layout_Keyboard const& ) = delete;

/// @brief Field Default offset 0xffffffff size 0x4
static constexpr int32_t  Default{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5797};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::RewiredConsts::Layout_Keyboard) == 0x10, "Size mismatch!");

} // namespace end def RewiredConsts
// Dependencies System.Object
namespace RewiredConsts {
// Is value type: false
// CS Name: RewiredConsts.Layout/Mouse
class CORDL_TYPE Layout_Mouse : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Layout_Mouse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Layout_Mouse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Layout_Mouse(Layout_Mouse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Layout_Mouse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Layout_Mouse(Layout_Mouse const& ) = delete;

/// @brief Field Default offset 0xffffffff size 0x4
static constexpr int32_t  Default{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5798};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::RewiredConsts::Layout_Mouse) == 0x10, "Size mismatch!");

} // namespace end def RewiredConsts
// Dependencies System.Object
namespace RewiredConsts {
// Is value type: false
// CS Name: RewiredConsts.Layout/CustomController
class CORDL_TYPE Layout_CustomController : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Layout_CustomController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Layout_CustomController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Layout_CustomController(Layout_CustomController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Layout_CustomController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Layout_CustomController(Layout_CustomController const& ) = delete;

/// @brief Field Default offset 0xffffffff size 0x4
static constexpr int32_t  Default{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5799};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::RewiredConsts::Layout_CustomController) == 0x10, "Size mismatch!");

} // namespace end def RewiredConsts
// Dependencies System.Object
namespace RewiredConsts {
// Is value type: false
// CS Name: RewiredConsts.Layout
class CORDL_TYPE Layout : public ::System::Object {
public:
// Declarations
using CustomController = ::RewiredConsts::Layout_CustomController;

using Joystick = ::RewiredConsts::Layout_Joystick;

using Keyboard = ::RewiredConsts::Layout_Keyboard;

using Mouse = ::RewiredConsts::Layout_Mouse;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Layout() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Layout", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Layout(Layout && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Layout", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Layout(Layout const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5800};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::RewiredConsts::Layout) == 0x10, "Size mismatch!");

} // namespace end def RewiredConsts
