#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ReadHelperException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ReadHelperException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class ReadHelperException;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::ReadHelperException*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::ReadHelperException*, "Mirror.SimpleWeb", "ReadHelperException");
// Dependencies System.Exception
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.ReadHelperException
class CORDL_TYPE ReadHelperException : public ::System::Exception {
public:
// Declarations
static inline ::Mirror::SimpleWeb::ReadHelperException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::Mirror::SimpleWeb::ReadHelperException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x18161dc10, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x1804be150, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadHelperException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadHelperException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadHelperException(ReadHelperException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadHelperException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadHelperException(ReadHelperException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20531};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SimpleWeb::ReadHelperException) == 0x90, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
