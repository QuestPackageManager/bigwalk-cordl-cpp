#pragma once
// IWYU pragma private; include "UnityEngine/UnityLogWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityLogWriter)
namespace System::Text {
class Encoding;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine {
class UnityLogWriter;
}
// Write type traits
MARK_REF_T(::UnityEngine::UnityLogWriter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UnityLogWriter*, "UnityEngine", "UnityLogWriter");
// Dependencies System.IO.TextWriter
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.UnityLogWriter
class CORDL_TYPE UnityLogWriter : public ::System::IO::TextWriter {
public:
// Declarations
 __declspec(property(get=get_Encoding)) ::System::Text::Encoding*  Encoding;

/// @brief Method Init, addr 0x18226b960, size 0x60, virtual false, abstract: false, final false
static inline void Init() ;

static inline ::UnityEngine::UnityLogWriter* New_ctor() ;

/// @brief Method Write, addr 0x18226bb20, size 0x30, virtual true, abstract: false, final false
inline void Write(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Write, addr 0x18226bad0, size 0x20, virtual true, abstract: false, final false
inline void Write(::StringW  s) ;

/// @brief Method Write, addr 0x18226baf0, size 0x30, virtual true, abstract: false, final false
inline void Write(char16_t  value) ;

/// @brief Method WriteStringToUnityLog, addr 0x18226bac0, size 0x10, virtual false, abstract: false, final false
static inline void WriteStringToUnityLog(::StringW  s) ;

/// @brief Method WriteStringToUnityLogImpl, addr 0x18226b9d0, size 0xf0, virtual false, abstract: false, final false
static inline void WriteStringToUnityLogImpl(::StringW  s) ;

/// @brief Method WriteStringToUnityLogImpl_Injected, addr 0x18226b9c0, size 0x10, virtual false, abstract: false, final false
static inline void WriteStringToUnityLogImpl_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  s) ;

/// @brief Method .ctor, addr 0x18226bb50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Encoding, addr 0x18226bb60, size 0x10, virtual true, abstract: false, final false
inline ::System::Text::Encoding* get_Encoding() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityLogWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityLogWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityLogWriter(UnityLogWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityLogWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityLogWriter(UnityLogWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10604};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UnityLogWriter) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine
