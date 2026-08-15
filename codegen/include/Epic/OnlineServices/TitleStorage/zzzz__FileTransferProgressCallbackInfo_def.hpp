#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/FileTransferProgressCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileTransferProgressCallbackInfo)
namespace Epic::OnlineServices {
class ICallbackInfo;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::TitleStorage {
struct FileTransferProgressCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo, "Epic.OnlineServices.TitleStorage", "FileTransferProgressCallbackInfo");
// Dependencies 
namespace Epic::OnlineServices::TitleStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.TitleStorage.FileTransferProgressCallbackInfo
struct CORDL_TYPE FileTransferProgressCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_BytesTransferred, put=set_BytesTransferred)) uint32_t  BytesTransferred;

 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_Filename, put=set_Filename)) ::Epic::OnlineServices::Utf8String*  Filename;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_TotalFileSizeBytes, put=set_TotalFileSizeBytes)) uint32_t  TotalFileSizeBytes;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_BytesTransferred, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_BytesTransferred() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_Filename, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Filename() ;

/// @brief Method get_LocalUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_TotalFileSizeBytes, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_TotalFileSizeBytes() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_BytesTransferred, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_BytesTransferred(uint32_t  value) ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_Filename, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_Filename(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_TotalFileSizeBytes, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_TotalFileSizeBytes(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FileTransferProgressCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Filename_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_BytesTransferred_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_TotalFileSizeBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr FileTransferProgressCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Filename_k__BackingField, uint32_t  _BytesTransferred_k__BackingField, uint32_t  _TotalFileSizeBytes_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7601};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <Filename>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Filename_k__BackingField;

/// @brief Field <BytesTransferred>k__BackingField, offset: 0x18, size: 0x4, def value: None
 uint32_t  _BytesTransferred_k__BackingField;

/// @brief Field <TotalFileSizeBytes>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 uint32_t  _TotalFileSizeBytes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo, _LocalUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo, _Filename_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo, _BytesTransferred_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo, _TotalFileSizeBytes_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::TitleStorage::FileTransferProgressCallbackInfo) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::TitleStorage
