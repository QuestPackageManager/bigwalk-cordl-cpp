#pragma once
// IWYU pragma private; include "Telepathy/Log.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Log)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Telepathy {
class Log;
}
// Write type traits
MARK_REF_T(::Telepathy::Log*);
DEFINE_IL2CPP_CLASS(::Telepathy::Log*, "Telepathy", "Log");
// Dependencies System.Object
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.Log
class CORDL_TYPE Log : public ::System::Object {
public:
// Declarations
/// @brief Field Error, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Error, put=setStaticF_Error)) ::System::Action_1<::StringW>*  Error;

/// @brief Field Info, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Info, put=setStaticF_Info)) ::System::Action_1<::StringW>*  Info;

/// @brief Field Warning, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Warning, put=setStaticF_Warning)) ::System::Action_1<::StringW>*  Warning;

static inline ::System::Action_1<::StringW>* getStaticF_Error() ;

static inline ::System::Action_1<::StringW>* getStaticF_Info() ;

static inline ::System::Action_1<::StringW>* getStaticF_Warning() ;

static inline void setStaticF_Error(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_Info(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_Warning(::System::Action_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Log() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Log(Log && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Log(Log const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21319};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Telepathy::Log) == 0x10, "Size mismatch!");

} // namespace end def Telepathy
