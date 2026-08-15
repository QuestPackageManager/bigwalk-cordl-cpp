#pragma once
// IWYU pragma private; include "GlobalNamespace/BigWalkOpenObserve.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BigWalkOpenObserve)
// Forward declare root types
namespace GlobalNamespace {
class BigWalkOpenObserve;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BigWalkOpenObserve*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BigWalkOpenObserve*, "", "BigWalkOpenObserve");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BigWalkOpenObserve
class CORDL_TYPE BigWalkOpenObserve : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::BigWalkOpenObserve>  _instance;

/// @brief Method Awake, addr 0x181acaf90, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InitOpenObserve, addr 0x181acafc0, size 0x270, virtual false, abstract: false, final false
inline void InitOpenObserve(::StringW  userName) ;

static inline ::GlobalNamespace::BigWalkOpenObserve* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::BigWalkOpenObserve> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x181acb230, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::BigWalkOpenObserve> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::BigWalkOpenObserve>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BigWalkOpenObserve() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BigWalkOpenObserve", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BigWalkOpenObserve(BigWalkOpenObserve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BigWalkOpenObserve", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BigWalkOpenObserve(BigWalkOpenObserve const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21054};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BigWalkOpenObserve) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
