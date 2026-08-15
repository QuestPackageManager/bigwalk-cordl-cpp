#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SocketId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SocketId)
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct SocketId;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::SocketId);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::SocketId, "Epic.OnlineServices.P2P", "SocketId");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.SocketId
struct CORDL_TYPE SocketId {
public:
// Declarations
/// @brief Field Empty, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::Epic::OnlineServices::P2P::SocketId  Empty;

 __declspec(property(get=get_SocketName, put=set_SocketName)) ::StringW  SocketName;

/// @brief Method CheckIfChanged, addr 0x180533fe0, size 0x60, virtual false, abstract: false, final false
inline void CheckIfChanged(bool  wasCacheValid) ;

/// @brief Method CopyIdToSwapBuffer, addr 0x180534040, size 0x50, virtual false, abstract: false, final false
inline void CopyIdToSwapBuffer() ;

/// @brief Method EnsureStorage, addr 0x180534090, size 0xa0, virtual false, abstract: false, final false
inline void EnsureStorage() ;

/// @brief Method PrepareForUpdate, addr 0x180534130, size 0x70, virtual false, abstract: false, final false
inline bool PrepareForUpdate() ;

/// @brief Method RebuildStringFromBuffer, addr 0x1805341a0, size 0xb0, virtual false, abstract: false, final false
inline void RebuildStringFromBuffer() ;

static inline ::Epic::OnlineServices::P2P::SocketId getStaticF_Empty() ;

/// @brief Method get_SocketName, addr 0x180534260, size 0x50, virtual false, abstract: false, final false
inline ::StringW get_SocketName() ;

static inline void setStaticF_Empty(::Epic::OnlineServices::P2P::SocketId  value) ;

/// @brief Method set_SocketName, addr 0x1805342b0, size 0x2a0, virtual false, abstract: false, final false
inline void set_SocketName(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SocketId() ;

// Ctor Parameters [CppParam { name: "m_CacheValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_CachedSocketName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_AllBytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_SwapBuffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr SocketId(bool  m_CacheValid, ::StringW  m_CachedSocketName, ::ArrayW<uint8_t>  m_AllBytes, ::ArrayW<uint8_t>  m_SwapBuffer) noexcept;

/// @brief Field ApiVersionLength offset 0xffffffff size 0x4
static constexpr int32_t  ApiVersionLength{static_cast<int32_t>(0x4)};

/// @brief Field MaxSocketNameLength offset 0xffffffff size 0x4
static constexpr int32_t  MaxSocketNameLength{static_cast<int32_t>(0x20)};

/// @brief Field NullTerminatorSpace offset 0xffffffff size 0x4
static constexpr int32_t  NullTerminatorSpace{static_cast<int32_t>(0x1)};

/// @brief Field TotalSizeInBytes offset 0xffffffff size 0x4
static constexpr int32_t  TotalSizeInBytes{static_cast<int32_t>(0x25)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9528};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_CacheValid, offset: 0x0, size: 0x1, def value: None
 bool  m_CacheValid;

/// @brief Field m_CachedSocketName, offset: 0x8, size: 0x8, def value: None
 ::StringW  m_CachedSocketName;

/// @brief Field m_AllBytes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_AllBytes;

/// @brief Field m_SwapBuffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_SwapBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::SocketId, m_CacheValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SocketId, m_CachedSocketName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SocketId, m_AllBytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SocketId, m_SwapBuffer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::SocketId) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
