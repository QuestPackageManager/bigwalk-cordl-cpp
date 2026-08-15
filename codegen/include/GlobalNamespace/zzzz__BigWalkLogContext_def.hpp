#pragma once
// IWYU pragma private; include "GlobalNamespace/BigWalkLogContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/Utils/zzzz__OpenObserveContext_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BigWalkLogContext)
// Forward declare root types
namespace GlobalNamespace {
class BigWalkLogContext;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BigWalkLogContext*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BigWalkLogContext*, "", "BigWalkLogContext");
// Dependencies Shipmates.Utils.OpenObserveContext
namespace GlobalNamespace {
// Is value type: false
// CS Name: BigWalkLogContext
class CORDL_TYPE BigWalkLogContext : public ::Shipmates::Utils::OpenObserveContext {
public:
// Declarations
/// @brief Field networkMode, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkMode, put=__cordl_internal_set_networkMode)) ::StringW  networkMode;

/// @brief Field onlineFriendCode, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onlineFriendCode, put=__cordl_internal_set_onlineFriendCode)) ::StringW  onlineFriendCode;

static inline ::GlobalNamespace::BigWalkLogContext* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_networkMode() const;

constexpr ::StringW& __cordl_internal_get_networkMode() ;

constexpr ::StringW const& __cordl_internal_get_onlineFriendCode() const;

constexpr ::StringW& __cordl_internal_get_onlineFriendCode() ;

constexpr void __cordl_internal_set_networkMode(::StringW  value) ;

constexpr void __cordl_internal_set_onlineFriendCode(::StringW  value) ;

/// @brief Method .ctor, addr 0x181acada0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BigWalkLogContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BigWalkLogContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BigWalkLogContext(BigWalkLogContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BigWalkLogContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BigWalkLogContext(BigWalkLogContext const& ) = delete;

/// @brief Field NETWORKMODE_CLIENT offset 0xffffffff size 0x8
static constexpr ::ConstString  NETWORKMODE_CLIENT{u"Client"};

/// @brief Field NETWORKMODE_HOST offset 0xffffffff size 0x8
static constexpr ::ConstString  NETWORKMODE_HOST{u"Host"};

/// @brief Field NETWORKMODE_NONE offset 0xffffffff size 0x8
static constexpr ::ConstString  NETWORKMODE_NONE{u"None"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21052};

/// @brief Field networkMode, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___networkMode;

/// @brief Field onlineFriendCode, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___onlineFriendCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BigWalkLogContext, ___networkMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BigWalkLogContext, ___onlineFriendCode) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BigWalkLogContext) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
