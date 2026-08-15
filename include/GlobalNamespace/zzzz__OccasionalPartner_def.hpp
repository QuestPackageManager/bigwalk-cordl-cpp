#pragma once
// IWYU pragma private; include "GlobalNamespace/OccasionalPartner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OccasionalPartner)
namespace GlobalNamespace {
class IOccasional;
}
// Forward declare root types
namespace GlobalNamespace {
class OccasionalPartner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OccasionalPartner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OccasionalPartner*, "", "OccasionalPartner");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OccasionalPartner
class CORDL_TYPE OccasionalPartner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::GlobalNamespace::IOccasional*  target;

static inline ::GlobalNamespace::OccasionalPartner* New_ctor() ;

/// @brief Method Update, addr 0x1803ed940, size 0x30, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::IOccasional* const& __cordl_internal_get_target() const;

constexpr ::GlobalNamespace::IOccasional*& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::GlobalNamespace::IOccasional*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OccasionalPartner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OccasionalPartner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OccasionalPartner(OccasionalPartner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OccasionalPartner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OccasionalPartner(OccasionalPartner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4954};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::IOccasional*  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OccasionalPartner, ___target) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OccasionalPartner) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
