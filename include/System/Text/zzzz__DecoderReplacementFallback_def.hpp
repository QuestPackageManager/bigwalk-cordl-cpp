#pragma once
// IWYU pragma private; include "System/Text/DecoderReplacementFallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderReplacementFallback)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Text {
class DecoderFallbackBuffer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class DecoderReplacementFallback;
}
// Write type traits
MARK_REF_T(::System::Text::DecoderReplacementFallback*);
DEFINE_IL2CPP_CLASS(::System::Text::DecoderReplacementFallback*, "System.Text", "DecoderReplacementFallback");
// Dependencies System.Text.DecoderFallback
namespace System::Text {
// Is value type: false
// CS Name: System.Text.DecoderReplacementFallback
class CORDL_TYPE DecoderReplacementFallback : public ::System::Text::DecoderFallback {
public:
// Declarations
 __declspec(property(get=get_DefaultString)) ::StringW  DefaultString;

 __declspec(property(get=get_MaxCharCount)) int32_t  MaxCharCount;

/// @brief Field _strDefault, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__strDefault, put=__cordl_internal_set__strDefault)) ::StringW  _strDefault;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method CreateFallbackBuffer, addr 0x18176cbf0, size 0x40, virtual true, abstract: false, final false
inline ::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer() ;

/// @brief Method Equals, addr 0x18176cc30, size 0x30, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method GetHashCode, addr 0x1815e9a20, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::Text::DecoderReplacementFallback* New_ctor() ;

static inline ::System::Text::DecoderReplacementFallback* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Text::DecoderReplacementFallback* New_ctor(::StringW  replacement) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x1815e9a40, size 0x20, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

constexpr ::StringW const& __cordl_internal_get__strDefault() const;

constexpr ::StringW& __cordl_internal_get__strDefault() ;

constexpr void __cordl_internal_set__strDefault(::StringW  value) ;

/// @brief Method .ctor, addr 0x18176cc60, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1815e9a70, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x1815e9af0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::StringW  replacement) ;

/// @brief Method get_DefaultString, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_DefaultString() ;

/// @brief Method get_MaxCharCount, addr 0x1815e9bd0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_MaxCharCount() ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecoderReplacementFallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecoderReplacementFallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DecoderReplacementFallback(DecoderReplacementFallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecoderReplacementFallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecoderReplacementFallback(DecoderReplacementFallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{673};

/// @brief Field _strDefault, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____strDefault;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::DecoderReplacementFallback, ____strDefault) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Text::DecoderReplacementFallback) == 0x18, "Size mismatch!");

} // namespace end def System::Text
