#pragma once
// IWYU pragma private; include "GlobalNamespace/RemoteConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RemoteConfig)
// Forward declare root types
namespace GlobalNamespace {
class RemoteConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RemoteConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RemoteConfig*, "", "RemoteConfig");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RemoteConfig
class CORDL_TYPE RemoteConfig : public ::System::Object {
public:
// Declarations
/// @brief Field GlobalCrossplay, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_GlobalCrossplay, put=__cordl_internal_set_GlobalCrossplay)) bool  GlobalCrossplay;

static inline ::GlobalNamespace::RemoteConfig* New_ctor() ;

constexpr bool const& __cordl_internal_get_GlobalCrossplay() const;

constexpr bool& __cordl_internal_get_GlobalCrossplay() ;

constexpr void __cordl_internal_set_GlobalCrossplay(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteConfig(RemoteConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteConfig(RemoteConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19024};

/// @brief Field GlobalCrossplay, offset: 0x10, size: 0x1, def value: None
 bool  ___GlobalCrossplay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RemoteConfig, ___GlobalCrossplay) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RemoteConfig) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
