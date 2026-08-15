#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/OnQueryActivePlayerSanctionsCallbackInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnQueryActivePlayerSanctionsCallbackInternal)
namespace Epic::OnlineServices::Sanctions {
struct QueryActivePlayerSanctionsCallbackInfoInternal;
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
namespace Epic::OnlineServices::Sanctions {
class OnQueryActivePlayerSanctionsCallbackInternal;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal*, "Epic.OnlineServices.Sanctions", "OnQueryActivePlayerSanctionsCallbackInternal");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::Sanctions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sanctions.OnQueryActivePlayerSanctionsCallbackInternal
class CORDL_TYPE OnQueryActivePlayerSanctionsCallbackInternal : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804e9bb0, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryActivePlayerSanctionsCallbackInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryActivePlayerSanctionsCallbackInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryActivePlayerSanctionsCallbackInternal(OnQueryActivePlayerSanctionsCallbackInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryActivePlayerSanctionsCallbackInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryActivePlayerSanctionsCallbackInternal(OnQueryActivePlayerSanctionsCallbackInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7884};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallbackInternal) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sanctions
