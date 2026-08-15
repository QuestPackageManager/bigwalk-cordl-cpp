#pragma once
// IWYU pragma private; include "GlobalNamespace/BigWalkLogInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/Utils/zzzz__BaseLogInstance_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BigWalkLogInstance)
namespace Shipmates::Utils {
class OpenObserveContext;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class BigWalkLogInstance;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BigWalkLogInstance*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BigWalkLogInstance*, "", "BigWalkLogInstance");
// Dependencies Shipmates.Utils.BaseLogInstance
namespace GlobalNamespace {
// Is value type: false
// CS Name: BigWalkLogInstance
class CORDL_TYPE BigWalkLogInstance : public ::Shipmates::Utils::BaseLogInstance {
public:
// Declarations
/// @brief Field networkMode, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkMode, put=__cordl_internal_set_networkMode)) ::StringW  networkMode;

/// @brief Field onlineFriendCode, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onlineFriendCode, put=__cordl_internal_set_onlineFriendCode)) ::StringW  onlineFriendCode;

/// @brief Method BigWalkLogInstanceCreator, addr 0x181acadf0, size 0xe0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BigWalkLogInstance* BigWalkLogInstanceCreator(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

/// @brief Method InjectContextMetadata, addr 0x181acaed0, size 0xc0, virtual true, abstract: false, final false
inline void InjectContextMetadata(::Shipmates::Utils::OpenObserveContext*  context) ;

static inline ::GlobalNamespace::BigWalkLogInstance* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_networkMode() const;

constexpr ::StringW& __cordl_internal_get_networkMode() ;

constexpr ::StringW const& __cordl_internal_get_onlineFriendCode() const;

constexpr ::StringW& __cordl_internal_get_onlineFriendCode() ;

constexpr void __cordl_internal_set_networkMode(::StringW  value) ;

constexpr void __cordl_internal_set_onlineFriendCode(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BigWalkLogInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BigWalkLogInstance", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BigWalkLogInstance(BigWalkLogInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BigWalkLogInstance", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BigWalkLogInstance(BigWalkLogInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21053};

/// @brief Field networkMode, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___networkMode;

/// @brief Field onlineFriendCode, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___onlineFriendCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BigWalkLogInstance, ___networkMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BigWalkLogInstance, ___onlineFriendCode) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BigWalkLogInstance) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
