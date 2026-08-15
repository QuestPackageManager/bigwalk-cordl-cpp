#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnIncomingConnectionRequestCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnIncomingConnectionRequestCallbackInternalImplementation)
namespace Epic::OnlineServices::P2P {
class OnIncomingConnectionRequestCallbackInternal;
}
namespace Epic::OnlineServices::P2P {
struct OnIncomingConnectionRequestInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
class OnIncomingConnectionRequestCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation*, "Epic.OnlineServices.P2P", "OnIncomingConnectionRequestCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::P2P {
// Is value type: false
// CS Name: Epic.OnlineServices.P2P.OnIncomingConnectionRequestCallbackInternalImplementation
class CORDL_TYPE OnIncomingConnectionRequestCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18052f4b0, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal>  data) ;

static inline ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18052f520, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnIncomingConnectionRequestCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnIncomingConnectionRequestCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnIncomingConnectionRequestCallbackInternalImplementation(OnIncomingConnectionRequestCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnIncomingConnectionRequestCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnIncomingConnectionRequestCallbackInternalImplementation(OnIncomingConnectionRequestCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9561};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
