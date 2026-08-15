#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/OnQueryActivePlayerSanctionsCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryActivePlayerSanctionsCallbackInternalImplementation)
namespace Epic::OnlineServices::Sanctions {
class OnQueryActivePlayerSanctionsCallbackInternal;
}
namespace Epic::OnlineServices::Sanctions {
struct QueryActivePlayerSanctionsCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Sanctions {
class OnQueryActivePlayerSanctionsCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation*, "Epic.OnlineServices.Sanctions", "OnQueryActivePlayerSanctionsCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Sanctions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sanctions.OnQueryActivePlayerSanctionsCallbackInternalImplementation
class CORDL_TYPE OnQueryActivePlayerSanctionsCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804e9a30, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804e9a90, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryActivePlayerSanctionsCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryActivePlayerSanctionsCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryActivePlayerSanctionsCallbackInternalImplementation(OnQueryActivePlayerSanctionsCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryActivePlayerSanctionsCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryActivePlayerSanctionsCallbackInternalImplementation(OnQueryActivePlayerSanctionsCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7885};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sanctions
