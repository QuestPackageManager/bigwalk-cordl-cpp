#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnWriteFileDataCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OnWriteFileDataCallback)
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteFileDataCallbackInfo;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteResult;
}
namespace System {
template<typename T>
struct ArraySegment_1;
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
class OnWriteFileDataCallback;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback*, "Epic.OnlineServices.PlayerDataStorage", "OnWriteFileDataCallback");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.PlayerDataStorage.OnWriteFileDataCallback
class CORDL_TYPE OnWriteFileDataCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804fbdc0, size 0x100, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo>  data, ::by_ref<::System::ArraySegment_1<uint8_t>>  outDataBuffer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804fbc30, size 0xd0, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::PlayerDataStorage::WriteResult EndInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo>  data, ::by_ref<::System::ArraySegment_1<uint8_t>>  outDataBuffer, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::PlayerDataStorage::WriteResult Invoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo>  data, ::by_ref<::System::ArraySegment_1<uint8_t>>  outDataBuffer) ;

static inline ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804fbec0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnWriteFileDataCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnWriteFileDataCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnWriteFileDataCallback(OnWriteFileDataCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnWriteFileDataCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnWriteFileDataCallback(OnWriteFileDataCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8314};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallback) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage
