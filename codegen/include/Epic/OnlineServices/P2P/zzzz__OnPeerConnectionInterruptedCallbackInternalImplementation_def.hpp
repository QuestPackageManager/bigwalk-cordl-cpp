#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnPeerConnectionInterruptedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnPeerConnectionInterruptedCallbackInternalImplementation)
namespace Epic::OnlineServices::P2P {
class OnPeerConnectionInterruptedCallbackInternal;
}
namespace Epic::OnlineServices::P2P {
struct OnPeerConnectionInterruptedInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
class OnPeerConnectionInterruptedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation*, "Epic.OnlineServices.P2P", "OnPeerConnectionInterruptedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::P2P {
// Is value type: false
// CS Name: Epic.OnlineServices.P2P.OnPeerConnectionInterruptedCallbackInternalImplementation
class CORDL_TYPE OnPeerConnectionInterruptedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1805306c0, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedInfoInternal>  data) ;

static inline ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180530730, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnPeerConnectionInterruptedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnPeerConnectionInterruptedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnPeerConnectionInterruptedCallbackInternalImplementation(OnPeerConnectionInterruptedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnPeerConnectionInterruptedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnPeerConnectionInterruptedCallbackInternalImplementation(OnPeerConnectionInterruptedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9576};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::P2P::OnPeerConnectionInterruptedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
