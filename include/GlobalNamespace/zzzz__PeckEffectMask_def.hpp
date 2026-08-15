#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectMask)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectMask_MaskType;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckEffectMask_MaskType;
}
namespace GlobalNamespace {
class PeckEffectMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckEffectMask_MaskType);
MARK_REF_T(::GlobalNamespace::PeckEffectMask*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectMask_MaskType, "", "PeckEffectMask/MaskType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectMask*, "", "PeckEffectMask");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectMask/MaskType
struct CORDL_TYPE PeckEffectMask_MaskType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckEffectMask_MaskType_Unwrapped
enum struct __PeckEffectMask_MaskType_Unwrapped : int32_t {
__E_Binoculars = static_cast<int32_t>(0x0),
__E_Telescope = static_cast<int32_t>(0x1),
__E_Blindfold = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckEffectMask_MaskType_Unwrapped () const noexcept {
return static_cast<__PeckEffectMask_MaskType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectMask_MaskType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckEffectMask_MaskType(int32_t  value__) noexcept;

/// @brief Field Binoculars value: I32(0)
static ::GlobalNamespace::PeckEffectMask_MaskType const Binoculars;

/// @brief Field Blindfold value: I32(2)
static ::GlobalNamespace::PeckEffectMask_MaskType const Blindfold;

/// @brief Field Telescope value: I32(1)
static ::GlobalNamespace::PeckEffectMask_MaskType const Telescope;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5390};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectMask_MaskType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectMask_MaskType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectMask::MaskType, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectMask
class CORDL_TYPE PeckEffectMask : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MaskType = ::GlobalNamespace::PeckEffectMask_MaskType;

/// @brief Field logVerbose, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field maskType, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_maskType, put=__cordl_internal_set_maskType)) ::GlobalNamespace::PeckEffectMask_MaskType  maskType;

/// @brief Field peckSystemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystemReference, put=__cordl_internal_set_peckSystemReference)) ::GlobalNamespace::PeckSystemReference  peckSystemReference;

/// @brief Method Awake, addr 0x18044a0d0, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectMask* New_ctor() ;

/// @brief Method Peck, addr 0x18044a170, size 0x160, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  context) ;

/// @brief Method SetMask, addr 0x18044a2d0, size 0x70, virtual false, abstract: false, final false
inline void SetMask(bool  active) ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::GlobalNamespace::PeckEffectMask_MaskType const& __cordl_internal_get_maskType() const;

constexpr ::GlobalNamespace::PeckEffectMask_MaskType& __cordl_internal_get_maskType() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystemReference() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_maskType(::GlobalNamespace::PeckEffectMask_MaskType  value) ;

constexpr void __cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectMask", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectMask(PeckEffectMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectMask", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectMask(PeckEffectMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5391};

/// @brief Field peckSystemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystemReference;

/// @brief Field maskType, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::PeckEffectMask_MaskType  ___maskType;

/// @brief Field logVerbose, offset: 0x4c, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectMask, ___peckSystemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectMask, ___maskType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectMask, ___logVerbose) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectMask) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
