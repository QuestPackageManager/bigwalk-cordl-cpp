#pragma once
// IWYU pragma private; include "GlobalNamespace/LandmarkSaveSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LandmarkSaveSetter)
// Forward declare root types
namespace GlobalNamespace {
class LandmarkSaveSetter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LandmarkSaveSetter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LandmarkSaveSetter*, "", "LandmarkSaveSetter");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LandmarkSaveSetter
class CORDL_TYPE LandmarkSaveSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field guid, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_guid, put=__cordl_internal_set_guid)) ::StringW  guid;

/// @brief Field showGizmos, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_showGizmos, put=__cordl_internal_set_showGizmos)) bool  showGizmos;

static inline ::GlobalNamespace::LandmarkSaveSetter* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18037e960, size 0x170, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::StringW const& __cordl_internal_get_guid() const;

constexpr ::StringW& __cordl_internal_get_guid() ;

constexpr bool const& __cordl_internal_get_showGizmos() const;

constexpr bool& __cordl_internal_get_showGizmos() ;

constexpr void __cordl_internal_set_guid(::StringW  value) ;

constexpr void __cordl_internal_set_showGizmos(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LandmarkSaveSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LandmarkSaveSetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LandmarkSaveSetter(LandmarkSaveSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LandmarkSaveSetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LandmarkSaveSetter(LandmarkSaveSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5591};

/// @brief Field guid, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___guid;

/// @brief Field showGizmos, offset: 0x28, size: 0x1, def value: None
 bool  ___showGizmos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LandmarkSaveSetter, ___guid) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LandmarkSaveSetter, ___showGizmos) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LandmarkSaveSetter) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
