#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/SerializedMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializedMethod)
namespace Rewired::Utils::Classes::Data {
struct TypeWrapper_DataType;
}
namespace Rewired::Utils::Classes::Data {
struct TypeWrapper;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes {
class SerializedMethod;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::SerializedMethod*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::SerializedMethod*, "Rewired.Utils.Classes", "SerializedMethod");
// Dependencies Rewired.Utils.Classes.Data.TypeWrapper, UnityEngine.ScriptableObject
namespace Rewired::Utils::Classes {
// Is value type: false
// CS Name: Rewired.Utils.Classes.SerializedMethod
class CORDL_TYPE SerializedMethod : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_DataCount)) int32_t  DataCount;

 __declspec(property(get=get_Result)) ::Rewired::Utils::Classes::Data::TypeWrapper  Result;

 __declspec(property(get=get_ResultIsValid)) bool  ResultIsValid;

 __declspec(property(get=get_ResultType)) ::Rewired::Utils::Classes::Data::TypeWrapper_DataType  ResultType;

/// @brief Field _data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::TypeWrapper>*  _data;

/// @brief Field _result, offset 0x28, size 0x20 
 __declspec(property(get=__cordl_internal_get__result, put=__cordl_internal_set__result)) ::Rewired::Utils::Classes::Data::TypeWrapper  _result;

/// @brief Field _resultIsValid, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__resultIsValid, put=__cordl_internal_set__resultIsValid)) bool  _resultIsValid;

/// @brief Field ejscisaamNEwZLvfppgMmaVmbyHCA, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_ejscisaamNEwZLvfppgMmaVmbyHCA, put=__cordl_internal_set_ejscisaamNEwZLvfppgMmaVmbyHCA)) bool  ejscisaamNEwZLvfppgMmaVmbyHCA;

/// @brief Method AddData, addr 0x1819323d0, size 0xf0, virtual false, abstract: false, final false
inline void AddData(::Rewired::Utils::Classes::Data::TypeWrapper  item) ;

/// @brief Method AddData, addr 0x181932940, size 0x120, virtual false, abstract: false, final false
inline void AddData(::StringW  item) ;

/// @brief Method AddData, addr 0x1819325e0, size 0x120, virtual false, abstract: false, final false
inline void AddData(::System::Object*  item) ;

/// @brief Method AddData, addr 0x181932820, size 0x120, virtual false, abstract: false, final false
inline void AddData(bool  item) ;

/// @brief Method AddData, addr 0x181932b70, size 0x120, virtual false, abstract: false, final false
inline void AddData(char16_t  item) ;

/// @brief Method AddData, addr 0x181932190, size 0x120, virtual false, abstract: false, final false
inline void AddData(double_t  item) ;

/// @brief Method AddData, addr 0x181932700, size 0x120, virtual false, abstract: false, final false
inline void AddData(float_t  item) ;

/// @brief Method AddData, addr 0x181931e40, size 0x110, virtual false, abstract: false, final false
inline void AddData(int32_t  item) ;

/// @brief Method AddData, addr 0x181932070, size 0x120, virtual false, abstract: false, final false
inline void AddData(int64_t  item) ;

/// @brief Method AddData, addr 0x1819324c0, size 0x120, virtual false, abstract: false, final false
inline void AddData(int8_t  item) ;

/// @brief Method AddData, addr 0x181932a60, size 0x110, virtual false, abstract: false, final false
inline void AddData(uint32_t  item) ;

/// @brief Method AddData, addr 0x1819322b0, size 0x120, virtual false, abstract: false, final false
inline void AddData(uint64_t  item) ;

/// @brief Method AddData, addr 0x181931f50, size 0x120, virtual false, abstract: false, final false
inline void AddData(uint8_t  item) ;

/// @brief Method ClearData, addr 0x181932c90, size 0x50, virtual false, abstract: false, final false
inline void ClearData() ;

/// @brief Method ClearResult, addr 0x181932ce0, size 0x10, virtual false, abstract: false, final false
inline void ClearResult() ;

/// @brief Method CzrbgnAUbVqgoaYbCcNPfIOEUGJn, addr 0x181932cf0, size 0x50, virtual false, abstract: false, final false
inline void CzrbgnAUbVqgoaYbCcNPfIOEUGJn() ;

/// @brief Method GetData, addr 0x181932d40, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::TypeWrapper GetData(int32_t  index) ;

static inline ::Rewired::Utils::Classes::SerializedMethod* New_ctor() ;

/// @brief Method Process, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Process() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::TypeWrapper>* const& __cordl_internal_get__data() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::TypeWrapper>*& __cordl_internal_get__data() ;

constexpr ::Rewired::Utils::Classes::Data::TypeWrapper const& __cordl_internal_get__result() const;

constexpr ::Rewired::Utils::Classes::Data::TypeWrapper& __cordl_internal_get__result() ;

constexpr bool const& __cordl_internal_get__resultIsValid() const;

constexpr bool& __cordl_internal_get__resultIsValid() ;

constexpr bool const& __cordl_internal_get_ejscisaamNEwZLvfppgMmaVmbyHCA() const;

constexpr bool& __cordl_internal_get_ejscisaamNEwZLvfppgMmaVmbyHCA() ;

constexpr void __cordl_internal_set__data(::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::TypeWrapper>*  value) ;

constexpr void __cordl_internal_set__result(::Rewired::Utils::Classes::Data::TypeWrapper  value) ;

constexpr void __cordl_internal_set__resultIsValid(bool  value) ;

constexpr void __cordl_internal_set_ejscisaamNEwZLvfppgMmaVmbyHCA(bool  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DataCount, addr 0x1818d0670, size 0x20, virtual false, abstract: false, final false
inline int32_t get_DataCount() ;

/// @brief Method get_Result, addr 0x181932d90, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::TypeWrapper get_Result() ;

/// @brief Method get_ResultIsValid, addr 0x1802fdd10, size 0x10, virtual false, abstract: false, final false
inline bool get_ResultIsValid() ;

/// @brief Method get_ResultType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::TypeWrapper_DataType get_ResultType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializedMethod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializedMethod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializedMethod(SerializedMethod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializedMethod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializedMethod(SerializedMethod const& ) = delete;

/// @brief Field XvLKbGVinTasNeBcBgzRUNNQrgEoA offset 0xffffffff size 0x4
static constexpr int32_t  XvLKbGVinTasNeBcBgzRUNNQrgEoA{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2966};

/// @brief Field ejscisaamNEwZLvfppgMmaVmbyHCA, offset: 0x18, size: 0x1, def value: None
 bool  ___ejscisaamNEwZLvfppgMmaVmbyHCA;

/// @brief Field _data, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::TypeWrapper>*  ____data;

/// @brief Field _result, offset: 0x28, size: 0x20, def value: None
 ::Rewired::Utils::Classes::Data::TypeWrapper  ____result;

/// @brief Field _resultIsValid, offset: 0x48, size: 0x1, def value: None
 bool  ____resultIsValid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::SerializedMethod, ___ejscisaamNEwZLvfppgMmaVmbyHCA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::SerializedMethod, ____data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::SerializedMethod, ____result) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::SerializedMethod, ____resultIsValid) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::SerializedMethod) == 0x50, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes
