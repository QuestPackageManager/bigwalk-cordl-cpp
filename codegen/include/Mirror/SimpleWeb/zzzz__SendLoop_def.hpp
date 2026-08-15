#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SendLoop.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendLoop)
namespace Mirror::SimpleWeb {
class ArrayBuffer;
}
namespace Mirror::SimpleWeb {
class Connection;
}
namespace Mirror::SimpleWeb {
class MaskHelper;
}
namespace Mirror::SimpleWeb {
struct SendLoop_Config;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class SendLoop;
}
namespace Mirror::SimpleWeb {
struct SendLoop_Config;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::SendLoop*);
MARK_VAL_T(::Mirror::SimpleWeb::SendLoop_Config);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::SendLoop*, "Mirror.SimpleWeb", "SendLoop");
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::SendLoop_Config, "Mirror.SimpleWeb", "SendLoop/Config");
// Dependencies 
namespace Mirror::SimpleWeb {
// Is value type: true
// CS Name: Mirror.SimpleWeb.SendLoop/Config
struct CORDL_TYPE SendLoop_Config {
public:
// Declarations
/// @brief Method Deconstruct, addr 0x181ad02a0, size 0x60, virtual false, abstract: false, final false
inline void Deconstruct(::by_ref<::Mirror::SimpleWeb::Connection*>  conn, ::by_ref<int32_t>  bufferSize, ::by_ref<bool>  setMask) ;

/// @brief Method .ctor, addr 0x181ad0440, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::Mirror::SimpleWeb::Connection*  conn, int32_t  bufferSize, bool  setMask) ;

// Ctor Parameters []
// @brief default ctor
constexpr SendLoop_Config() ;

// Ctor Parameters [CppParam { name: "conn", ty: "::Mirror::SimpleWeb::Connection*", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "setMask", ty: "bool", modifiers: "", def_value: None }]
constexpr SendLoop_Config(::Mirror::SimpleWeb::Connection*  conn, int32_t  bufferSize, bool  setMask) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20536};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field conn, offset: 0x0, size: 0x8, def value: None
 ::Mirror::SimpleWeb::Connection*  conn;

/// @brief Field bufferSize, offset: 0x8, size: 0x4, def value: None
 int32_t  bufferSize;

/// @brief Field setMask, offset: 0xc, size: 0x1, def value: None
 bool  setMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::SendLoop_Config, conn) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SendLoop_Config, bufferSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SendLoop_Config, setMask) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::SendLoop_Config) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.SendLoop
class CORDL_TYPE SendLoop : public ::System::Object {
public:
// Declarations
using Config = ::Mirror::SimpleWeb::SendLoop_Config;

/// @brief Method Loop, addr 0x181ad3480, size 0x6e0, virtual false, abstract: false, final false
static inline void Loop(::Mirror::SimpleWeb::SendLoop_Config  config) ;

/// @brief Method SendMessage, addr 0x181ad3b60, size 0x1f0, virtual false, abstract: false, final false
static inline int32_t SendMessage(::ArrayW<uint8_t>  buffer, int32_t  startOffset, ::Mirror::SimpleWeb::ArrayBuffer*  msg, bool  setMask, ::Mirror::SimpleWeb::MaskHelper*  maskHelper) ;

/// @brief Method WriteHeader, addr 0x181ad3d50, size 0xc0, virtual false, abstract: false, final false
static inline int32_t WriteHeader(::ArrayW<uint8_t>  buffer, int32_t  startOffset, int32_t  msgLength, bool  setMask) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SendLoop() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SendLoop", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SendLoop(SendLoop && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SendLoop", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SendLoop(SendLoop const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20537};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SimpleWeb::SendLoop) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
