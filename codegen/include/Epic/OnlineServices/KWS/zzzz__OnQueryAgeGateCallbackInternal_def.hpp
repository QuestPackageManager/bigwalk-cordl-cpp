#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/OnQueryAgeGateCallbackInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnQueryAgeGateCallbackInternal)
namespace Epic::OnlineServices::KWS {
struct QueryAgeGateCallbackInfoInternal;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::KWS {
class OnQueryAgeGateCallbackInternal;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal*, "Epic.OnlineServices.KWS", "OnQueryAgeGateCallbackInternal");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::KWS {
// Is value type: false
// CS Name: Epic.OnlineServices.KWS.OnQueryAgeGateCallbackInternal
class CORDL_TYPE OnQueryAgeGateCallbackInternal : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18051a380, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryAgeGateCallbackInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryAgeGateCallbackInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryAgeGateCallbackInternal(OnQueryAgeGateCallbackInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryAgeGateCallbackInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryAgeGateCallbackInternal(OnQueryAgeGateCallbackInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8766};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
