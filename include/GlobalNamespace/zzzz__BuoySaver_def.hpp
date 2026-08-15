#pragma once
// IWYU pragma private; include "GlobalNamespace/BuoySaver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BuoySaver)
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
class Prop;
}
namespace GlobalNamespace {
class SaveIdentity;
}
// Forward declare root types
namespace GlobalNamespace {
class BuoySaver;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuoySaver*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuoySaver*, "", "BuoySaver");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuoySaver
class CORDL_TYPE BuoySaver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field isFirst, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFirst, put=__cordl_internal_set_isFirst)) bool  isFirst;

/// @brief Field propHome, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_propHome, put=__cordl_internal_set_propHome)) ::UnityW<::GlobalNamespace::PropHome>  propHome;

/// @brief Field saveIdentity, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_saveIdentity, put=__cordl_internal_set_saveIdentity)) ::UnityW<::GlobalNamespace::SaveIdentity>  saveIdentity;

/// @brief Method Awake, addr 0x1803f7f20, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BuoySaver* New_ctor() ;

/// @brief Method OnChangeServer, addr 0x1803f8000, size 0x190, virtual false, abstract: false, final false
inline void OnChangeServer(::GlobalNamespace::PropHome*  propHome, ::GlobalNamespace::Prop*  oldProp, ::GlobalNamespace::Prop*  newProp) ;

constexpr bool const& __cordl_internal_get_isFirst() const;

constexpr bool& __cordl_internal_get_isFirst() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_propHome() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_propHome() ;

constexpr ::UnityW<::GlobalNamespace::SaveIdentity> const& __cordl_internal_get_saveIdentity() const;

constexpr ::UnityW<::GlobalNamespace::SaveIdentity>& __cordl_internal_get_saveIdentity() ;

constexpr void __cordl_internal_set_isFirst(bool  value) ;

constexpr void __cordl_internal_set_propHome(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set_saveIdentity(::UnityW<::GlobalNamespace::SaveIdentity>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuoySaver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuoySaver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BuoySaver(BuoySaver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuoySaver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuoySaver(BuoySaver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5027};

/// @brief Field propHome, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___propHome;

/// @brief Field saveIdentity, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SaveIdentity>  ___saveIdentity;

/// @brief Field isFirst, offset: 0x30, size: 0x1, def value: None
 bool  ___isFirst;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuoySaver, ___propHome) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuoySaver, ___saveIdentity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuoySaver, ___isFirst) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuoySaver) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
