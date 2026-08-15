#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Easing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Easing)
namespace JBooth::MicroVerseCore {
struct Easing_BlendShape;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct Easing_BlendShape;
}
namespace JBooth::MicroVerseCore {
class Easing;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::Easing_BlendShape);
MARK_REF_T(::JBooth::MicroVerseCore::Easing*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Easing_BlendShape, "JBooth.MicroVerseCore", "Easing/BlendShape");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Easing*, "JBooth.MicroVerseCore", "Easing");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.Easing/BlendShape
struct CORDL_TYPE Easing_BlendShape {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Easing_BlendShape_Unwrapped
enum struct __Easing_BlendShape_Unwrapped : int32_t {
__E_Linear = static_cast<int32_t>(0x0),
__E_Smoothstep = static_cast<int32_t>(0x1),
__E_EaseIn = static_cast<int32_t>(0x2),
__E_EaseOut = static_cast<int32_t>(0x3),
__E_EaseInOut = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Easing_BlendShape_Unwrapped () const noexcept {
return static_cast<__Easing_BlendShape_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Easing_BlendShape() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Easing_BlendShape(int32_t  value__) noexcept;

/// @brief Field EaseIn value: I32(2)
static ::JBooth::MicroVerseCore::Easing_BlendShape const EaseIn;

/// @brief Field EaseInOut value: I32(4)
static ::JBooth::MicroVerseCore::Easing_BlendShape const EaseInOut;

/// @brief Field EaseOut value: I32(3)
static ::JBooth::MicroVerseCore::Easing_BlendShape const EaseOut;

/// @brief Field Linear value: I32(0)
static ::JBooth::MicroVerseCore::Easing_BlendShape const Linear;

/// @brief Field Smoothstep value: I32(1)
static ::JBooth::MicroVerseCore::Easing_BlendShape const Smoothstep;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17998};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Easing_BlendShape, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Easing_BlendShape) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.Easing::BlendShape, System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Easing
class CORDL_TYPE Easing : public ::System::Object {
public:
// Declarations
using BlendShape = ::JBooth::MicroVerseCore::Easing_BlendShape;

/// @brief Field blend, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_blend, put=__cordl_internal_set_blend)) ::JBooth::MicroVerseCore::Easing_BlendShape  blend;

static inline ::JBooth::MicroVerseCore::Easing* New_ctor() ;

/// @brief Method PrepareMaterial, addr 0x18142c010, size 0x170, virtual false, abstract: false, final false
inline void PrepareMaterial(::UnityEngine::Material*  mat, ::StringW  key, ::System::Collections::Generic::List_1<::StringW>*  keywords) ;

constexpr ::JBooth::MicroVerseCore::Easing_BlendShape const& __cordl_internal_get_blend() const;

constexpr ::JBooth::MicroVerseCore::Easing_BlendShape& __cordl_internal_get_blend() ;

constexpr void __cordl_internal_set_blend(::JBooth::MicroVerseCore::Easing_BlendShape  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing(Easing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing(Easing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17999};

/// @brief Field blend, offset: 0x10, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::Easing_BlendShape  ___blend;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Easing, ___blend) == 0x10, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Easing) == 0x18, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
