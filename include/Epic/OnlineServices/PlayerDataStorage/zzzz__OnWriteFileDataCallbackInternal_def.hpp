#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnWriteFileDataCallbackInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OnWriteFileDataCallbackInternal)
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteFileDataCallbackInfoInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteResult;
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
namespace Epic::OnlineServices::PlayerDataStorage {
class OnWriteFileDataCallbackInternal;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*, "Epic.OnlineServices.PlayerDataStorage", "OnWriteFileDataCallbackInternal");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.PlayerDataStorage.OnWriteFileDataCallbackInternal
class CORDL_TYPE OnWriteFileDataCallbackInternal : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804fbbb0, size 0x80, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>  data, ::System::IntPtr  outDataBuffer, ::by_ref<uint32_t>  outDataWritten, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804fbc30, size 0xd0, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::PlayerDataStorage::WriteResult EndInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>  data, ::by_ref<uint32_t>  outDataWritten, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::PlayerDataStorage::WriteResult Invoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>  data, ::System::IntPtr  outDataBuffer, ::by_ref<uint32_t>  outDataWritten) ;

static inline ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804fbd00, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnWriteFileDataCallbackInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnWriteFileDataCallbackInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnWriteFileDataCallbackInternal(OnWriteFileDataCallbackInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnWriteFileDataCallbackInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnWriteFileDataCallbackInternal(OnWriteFileDataCallbackInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8315};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage
