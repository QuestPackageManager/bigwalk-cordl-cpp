#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/QueryFileListCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryFileListCallbackInfo)
namespace Epic::OnlineServices {
class ICallbackInfo;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
struct QueryFileListCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfo, "Epic.OnlineServices.PlayerDataStorage", "QueryFileListCallbackInfo");
// Dependencies Epic.OnlineServices.Result
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.PlayerDataStorage.QueryFileListCallbackInfo
struct CORDL_TYPE QueryFileListCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_FileCount, put=set_FileCount)) uint32_t  FileCount;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_ResultCode, put=set_ResultCode)) ::Epic::OnlineServices::Result  ResultCode;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1804d84b0, size 0xa0, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_FileCount, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_FileCount() ;

/// @brief Method get_LocalUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_ResultCode, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result get_ResultCode() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_FileCount, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_FileCount(uint32_t  value) ;

/// @brief Method set_LocalUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ResultCode, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_ResultCode(::Epic::OnlineServices::Result  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryFileListCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ResultCode_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_FileCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr QueryFileListCallbackInfo(::Epic::OnlineServices::Result  _ResultCode_k__BackingField, ::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, uint32_t  _FileCount_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8321};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <ResultCode>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  _ResultCode_k__BackingField;

/// @brief Field <ClientData>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <FileCount>k__BackingField, offset: 0x18, size: 0x4, def value: None
 uint32_t  _FileCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfo, _ResultCode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfo, _ClientData_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfo, _LocalUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfo, _FileCount_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::QueryFileListCallbackInfo) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage
