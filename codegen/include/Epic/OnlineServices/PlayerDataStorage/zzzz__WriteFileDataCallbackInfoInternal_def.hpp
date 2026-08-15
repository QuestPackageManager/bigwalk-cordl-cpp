#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/WriteFileDataCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WriteFileDataCallbackInfoInternal)
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteFileDataCallbackInfo;
}
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteFileDataCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal, "Epic.OnlineServices.PlayerDataStorage", "WriteFileDataCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.PlayerDataStorage.WriteFileDataCallbackInfoInternal
struct CORDL_TYPE WriteFileDataCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804e7160, size 0x150, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__PlayerDataStorage__WriteFileDataCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr WriteFileDataCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Filename", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DataBufferLengthBytes", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr WriteFileDataCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Filename, uint32_t  m_DataBufferLengthBytes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8337};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_Filename, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Filename;

/// @brief Field m_DataBufferLengthBytes, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_DataBufferLengthBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal, m_Filename) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal, m_DataBufferLengthBytes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage
