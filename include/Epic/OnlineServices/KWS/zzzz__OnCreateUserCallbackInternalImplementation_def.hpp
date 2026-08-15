#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/OnCreateUserCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnCreateUserCallbackInternalImplementation)
namespace Epic::OnlineServices::KWS {
struct CreateUserCallbackInfoInternal;
}
namespace Epic::OnlineServices::KWS {
class OnCreateUserCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::KWS {
class OnCreateUserCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation*, "Epic.OnlineServices.KWS", "OnCreateUserCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::KWS {
// Is value type: false
// CS Name: Epic.OnlineServices.KWS.OnCreateUserCallbackInternalImplementation
class CORDL_TYPE OnCreateUserCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::KWS::OnCreateUserCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1805192e0, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::KWS::OnCreateUserCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180519350, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::KWS::OnCreateUserCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::KWS::OnCreateUserCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnCreateUserCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnCreateUserCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnCreateUserCallbackInternalImplementation(OnCreateUserCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnCreateUserCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnCreateUserCallbackInternalImplementation(OnCreateUserCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8761};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
