#pragma once
// IWYU pragma private; include "System/TypeInitializationException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TypeInitializationException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class TypeInitializationException;
}
// Write type traits
MARK_REF_T(::System::TypeInitializationException*);
DEFINE_IL2CPP_CLASS(::System::TypeInitializationException*, "System", "TypeInitializationException");
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.TypeInitializationException
class CORDL_TYPE TypeInitializationException : public ::System::SystemException {
public:
// Declarations
 __declspec(property(get=get_TypeName)) ::StringW  TypeName;

/// @brief Field _typeName, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__typeName, put=__cordl_internal_set__typeName)) ::StringW  _typeName;

/// @brief Method GetObjectData, addr 0x181728630, size 0x80, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::TypeInitializationException* New_ctor() ;

static inline ::System::TypeInitializationException* New_ctor(::StringW  fullTypeName, ::System::Exception*  innerException) ;

static inline ::System::TypeInitializationException* New_ctor(::StringW  fullTypeName, ::StringW  message, ::System::Exception*  innerException) ;

static inline ::System::TypeInitializationException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

constexpr ::StringW const& __cordl_internal_get__typeName() const;

constexpr ::StringW& __cordl_internal_get__typeName() ;

constexpr void __cordl_internal_set__typeName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1817286b0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1817286e0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  fullTypeName, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x1817287b0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  fullTypeName, ::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x181728750, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_TypeName, addr 0x181721840, size 0x30, virtual false, abstract: false, final false
inline ::StringW get_TypeName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeInitializationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeInitializationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeInitializationException(TypeInitializationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeInitializationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeInitializationException(TypeInitializationException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{328};

/// @brief Field _typeName, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____typeName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TypeInitializationException, ____typeName) == 0x90, "Offset mismatch!");

static_assert(sizeof(::System::TypeInitializationException) == 0x98, "Size mismatch!");

} // namespace end def System
