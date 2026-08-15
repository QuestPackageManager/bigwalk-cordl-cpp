#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/ProtectMessageOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProtectMessageOptions)
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatServer {
struct ProtectMessageOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions, "Epic.OnlineServices.AntiCheatServer", "ProtectMessageOptions");
// Dependencies System.ArraySegment`1<T>, System.IntPtr
namespace Epic::OnlineServices::AntiCheatServer {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatServer.ProtectMessageOptions
struct CORDL_TYPE ProtectMessageOptions {
public:
// Declarations
 __declspec(property(get=get_ClientHandle, put=set_ClientHandle)) ::System::IntPtr  ClientHandle;

 __declspec(property(get=get_Data, put=set_Data)) ::System::ArraySegment_1<uint8_t>  Data;

 __declspec(property(get=get_OutBufferSizeBytes, put=set_OutBufferSizeBytes)) uint32_t  OutBufferSizeBytes;

/// @brief Method get_ClientHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_ClientHandle() ;

/// @brief Method get_Data, addr 0x18038fea0, size 0x10, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> get_Data() ;

/// @brief Method get_OutBufferSizeBytes, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_OutBufferSizeBytes() ;

/// @brief Method set_ClientHandle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_ClientHandle(::System::IntPtr  value) ;

/// @brief Method set_Data, addr 0x18051eaa0, size 0x20, virtual false, abstract: false, final false
inline void set_Data(::System::ArraySegment_1<uint8_t>  value) ;

/// @brief Method set_OutBufferSizeBytes, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_OutBufferSizeBytes(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ProtectMessageOptions() ;

// Ctor Parameters [CppParam { name: "_ClientHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_Data_k__BackingField", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_OutBufferSizeBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ProtectMessageOptions(::System::IntPtr  _ClientHandle_k__BackingField, ::System::ArraySegment_1<uint8_t>  _Data_k__BackingField, uint32_t  _OutBufferSizeBytes_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9321};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <ClientHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _ClientHandle_k__BackingField;

/// @brief Field <Data>k__BackingField, offset: 0x8, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  _Data_k__BackingField;

/// @brief Field <OutBufferSizeBytes>k__BackingField, offset: 0x18, size: 0x4, def value: None
 uint32_t  _OutBufferSizeBytes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions, _ClientHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions, _Data_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions, _OutBufferSizeBytes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatServer
