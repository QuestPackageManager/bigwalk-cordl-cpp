#pragma once
// IWYU pragma private; include "GlobalNamespace/AbstractPlatformEnvironment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EPlatformEnvironment_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
CORDL_MODULE_EXPORT(AbstractPlatformEnvironment)
namespace GlobalNamespace {
struct EPlatformEnvironment;
}
namespace Shipmate::Porting::Logs {
class PlatformLog;
}
// Forward declare root types
namespace GlobalNamespace {
class AbstractPlatformEnvironment;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AbstractPlatformEnvironment*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AbstractPlatformEnvironment*, "", "AbstractPlatformEnvironment");
// Dependencies EPlatformEnvironment, Shipmate.Porting.AbstractPlatformLogic, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: AbstractPlatformEnvironment
class CORDL_TYPE AbstractPlatformEnvironment : public ::Shipmate::Porting::AbstractPlatformLogic {
public:
// Declarations
 __declspec(property(get=get_CheatsDisabled)) bool  CheatsDisabled;

 __declspec(property(get=get_CurrentEnvironment)) ::GlobalNamespace::EPlatformEnvironment  CurrentEnvironment;

 __declspec(property(get=get_DevCheatsDisabled)) bool  DevCheatsDisabled;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Shipmate::Porting::Logs::PlatformLog*  Log;

/// @brief Field mForcedEnvironment, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mForcedEnvironment, put=__cordl_internal_set_mForcedEnvironment)) ::System::Nullable_1<::GlobalNamespace::EPlatformEnvironment>  mForcedEnvironment;

/// @brief Method GetCurrentEnvironment, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::GlobalNamespace::EPlatformEnvironment GetCurrentEnvironment() ;

static inline ::GlobalNamespace::AbstractPlatformEnvironment* New_ctor() ;

/// @brief Method SetForcedEnvironment, addr 0x181780df0, size 0x30, virtual false, abstract: false, final false
inline void SetForcedEnvironment(::GlobalNamespace::EPlatformEnvironment  aEnviro) ;

constexpr ::System::Nullable_1<::GlobalNamespace::EPlatformEnvironment> const& __cordl_internal_get_mForcedEnvironment() const;

constexpr ::System::Nullable_1<::GlobalNamespace::EPlatformEnvironment>& __cordl_internal_get_mForcedEnvironment() ;

constexpr void __cordl_internal_set_mForcedEnvironment(::System::Nullable_1<::GlobalNamespace::EPlatformEnvironment>  value) ;

/// @brief Method .ctor, addr 0x181ac5230, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Shipmate::Porting::Logs::PlatformLog* getStaticF_Log() ;

/// @brief Method get_CheatsDisabled, addr 0x181ac5240, size 0x80, virtual true, abstract: false, final false
inline bool get_CheatsDisabled() ;

/// @brief Method get_CurrentEnvironment, addr 0x181ac52c0, size 0x30, virtual false, abstract: false, final false
inline ::GlobalNamespace::EPlatformEnvironment get_CurrentEnvironment() ;

/// @brief Method get_DevCheatsDisabled, addr 0x181163ae0, size 0x20, virtual true, abstract: false, final false
inline bool get_DevCheatsDisabled() ;

static inline void setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformEnvironment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformEnvironment", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractPlatformEnvironment(AbstractPlatformEnvironment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformEnvironment", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractPlatformEnvironment(AbstractPlatformEnvironment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20586};

/// @brief Field mForcedEnvironment, offset: 0x18, size: 0x8, def value: None
 ::System::Nullable_1<::GlobalNamespace::EPlatformEnvironment>  ___mForcedEnvironment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AbstractPlatformEnvironment, ___mForcedEnvironment) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AbstractPlatformEnvironment) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
