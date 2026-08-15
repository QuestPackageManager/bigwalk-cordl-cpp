#pragma once
// IWYU pragma private; include "GlobalNamespace/KeyboardLayoutHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__KeyboardKeyCode_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyboardLayoutHandler)
namespace GlobalNamespace {
struct KeyboardLayoutHandler_KeyCodeOrFallback;
}
namespace GlobalNamespace {
struct KeyboardLayoutHandler_KeyboardLayout;
}
namespace Rewired {
struct KeyboardKeyCode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct KeyboardLayoutHandler_KeyboardLayout;
}
namespace GlobalNamespace {
class KeyboardLayoutHandler;
}
namespace GlobalNamespace {
struct KeyboardLayoutHandler_KeyCodeOrFallback;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout);
MARK_REF_T(::GlobalNamespace::KeyboardLayoutHandler*);
MARK_VAL_T(::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout, "", "KeyboardLayoutHandler/KeyboardLayout");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KeyboardLayoutHandler*, "", "KeyboardLayoutHandler");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback, "", "KeyboardLayoutHandler/KeyCodeOrFallback");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: KeyboardLayoutHandler/KeyboardLayout
struct CORDL_TYPE KeyboardLayoutHandler_KeyboardLayout {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KeyboardLayoutHandler_KeyboardLayout_Unwrapped
enum struct __KeyboardLayoutHandler_KeyboardLayout_Unwrapped : int32_t {
__E_Qwerty = static_cast<int32_t>(0x0),
__E_Azerty = static_cast<int32_t>(0x1),
__E_Qwertz = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KeyboardLayoutHandler_KeyboardLayout_Unwrapped () const noexcept {
return static_cast<__KeyboardLayoutHandler_KeyboardLayout_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KeyboardLayoutHandler_KeyboardLayout() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyboardLayoutHandler_KeyboardLayout(int32_t  value__) noexcept;

/// @brief Field Azerty value: I32(1)
static ::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout const Azerty;

/// @brief Field Qwerty value: I32(0)
static ::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout const Qwerty;

/// @brief Field Qwertz value: I32(2)
static ::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout const Qwertz;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5006};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Rewired.KeyboardKeyCode, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: KeyboardLayoutHandler/KeyCodeOrFallback
struct CORDL_TYPE KeyboardLayoutHandler_KeyCodeOrFallback {
public:
// Declarations
 __declspec(property(get=get_IsKeyCode)) bool  IsKeyCode;

/// @brief Method .ctor, addr 0x1803ff3b0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Rewired::KeyboardKeyCode  keyCode) ;

/// @brief Method .ctor, addr 0x1803ff400, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  str) ;

/// @brief Method get_IsKeyCode, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline bool get_IsKeyCode() ;

/// @brief Method op_Implicit, addr 0x1803ff440, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback op_Implicit___GlobalNamespace__KeyboardLayoutHandler_KeyCodeOrFallback(::Rewired::KeyboardKeyCode  keyCode) ;

/// @brief Method op_Implicit, addr 0x1803ff490, size 0x60, virtual false, abstract: false, final false
static inline ::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback op_Implicit___GlobalNamespace__KeyboardLayoutHandler_KeyCodeOrFallback(::StringW  str) ;

// Ctor Parameters []
// @brief default ctor
constexpr KeyboardLayoutHandler_KeyCodeOrFallback() ;

// Ctor Parameters [CppParam { name: "KeyCode", ty: "::System::Nullable_1<::Rewired::KeyboardKeyCode>", modifiers: "", def_value: None }, CppParam { name: "String", ty: "::StringW", modifiers: "", def_value: None }]
constexpr KeyboardLayoutHandler_KeyCodeOrFallback(::System::Nullable_1<::Rewired::KeyboardKeyCode>  KeyCode, ::StringW  String) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5007};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field KeyCode, offset: 0x0, size: 0x8, def value: None
 ::System::Nullable_1<::Rewired::KeyboardKeyCode>  KeyCode;

/// @brief Field String, offset: 0x8, size: 0x8, def value: None
 ::StringW  String;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback, KeyCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback, String) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KeyboardLayoutHandler
class CORDL_TYPE KeyboardLayoutHandler : public ::System::Object {
public:
// Declarations
using KeyCodeOrFallback = ::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback;

using KeyboardLayout = ::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout;

/// @brief Field LayoutMappings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LayoutMappings, put=setStaticF_LayoutMappings)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout,::System::Collections::Generic::Dictionary_2<::Rewired::KeyboardKeyCode,::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>*>*  LayoutMappings;

/// @brief Method GetKeyCodeOrFallback, addr 0x1803ff4f0, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback GetKeyCodeOrFallback(::Rewired::KeyboardKeyCode  keyCode, ::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout  keyboardLayout) ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout,::System::Collections::Generic::Dictionary_2<::Rewired::KeyboardKeyCode,::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>*>* getStaticF_LayoutMappings() ;

static inline void setStaticF_LayoutMappings(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KeyboardLayoutHandler_KeyboardLayout,::System::Collections::Generic::Dictionary_2<::Rewired::KeyboardKeyCode,::GlobalNamespace::KeyboardLayoutHandler_KeyCodeOrFallback>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyboardLayoutHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyboardLayoutHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyboardLayoutHandler(KeyboardLayoutHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardLayoutHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyboardLayoutHandler(KeyboardLayoutHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5008};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KeyboardLayoutHandler) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
