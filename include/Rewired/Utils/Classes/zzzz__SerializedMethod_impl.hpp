#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/SerializedMethod.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rewired/Utils/Classes/zzzz__SerializedMethod_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__TypeWrapper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.get_ResultType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper_DataType (::Rewired::Utils::Classes::SerializedMethod::*)()>(&::Rewired::Utils::Classes::SerializedMethod::get_ResultType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.get_DataCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::SerializedMethod::*)()>(&::Rewired::Utils::Classes::SerializedMethod::get_DataCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818d0670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"get_DataCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (::Rewired::Utils::Classes::SerializedMethod::*)()>(&::Rewired::Utils::Classes::SerializedMethod::get_Result)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181932d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.get_ResultIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::SerializedMethod::*)()>(&::Rewired::Utils::Classes::SerializedMethod::get_ResultIsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fdd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"get_ResultIsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::TypeWrapper (::Rewired::Utils::Classes::SerializedMethod::*)(int32_t)>(&::Rewired::Utils::Classes::SerializedMethod::GetData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181932d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"GetData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)(uint8_t)>(&::Rewired::Utils::Classes::SerializedMethod::AddData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181931f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)(int8_t)>(&::Rewired::Utils::Classes::SerializedMethod::AddData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1819324c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)(char16_t)>(&::Rewired::Utils::Classes::SerializedMethod::AddData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181932b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)(int32_t)>(&::Rewired::Utils::Classes::SerializedMethod::AddData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181931e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)(uint32_t)>(&::Rewired::Utils::Classes::SerializedMethod::AddData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181932a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)(int64_t)>(&::Rewired::Utils::Classes::SerializedMethod::AddData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181932070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)(uint64_t)>(&::Rewired::Utils::Classes::SerializedMethod::AddData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1819322b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)(float_t)>(&::Rewired::Utils::Classes::SerializedMethod::AddData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181932700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)(double_t)>(&::Rewired::Utils::Classes::SerializedMethod::AddData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181932190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)(bool)>(&::Rewired::Utils::Classes::SerializedMethod::AddData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181932820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)(::StringW)>(&::Rewired::Utils::Classes::SerializedMethod::AddData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181932940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)(::System::Object*)>(&::Rewired::Utils::Classes::SerializedMethod::AddData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1819325e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)(::Rewired::Utils::Classes::Data::TypeWrapper)>(&::Rewired::Utils::Classes::SerializedMethod::AddData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1819323d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.ClearData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)()>(&::Rewired::Utils::Classes::SerializedMethod::ClearData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181932c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"ClearData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.ClearResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)()>(&::Rewired::Utils::Classes::SerializedMethod::ClearResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181932ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"ClearResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::SerializedMethod::*)()>(&::Rewired::Utils::Classes::SerializedMethod::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod.CzrbgnAUbVqgoaYbCcNPfIOEUGJn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)()>(&::Rewired::Utils::Classes::SerializedMethod::CzrbgnAUbVqgoaYbCcNPfIOEUGJn)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181932cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"CzrbgnAUbVqgoaYbCcNPfIOEUGJn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::SerializedMethod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::SerializedMethod::*)()>(&::Rewired::Utils::Classes::SerializedMethod::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Utils::Classes::SerializedMethod::__cordl_internal_get_ejscisaamNEwZLvfppgMmaVmbyHCA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejscisaamNEwZLvfppgMmaVmbyHCA;
}
constexpr bool const& Rewired::Utils::Classes::SerializedMethod::__cordl_internal_get_ejscisaamNEwZLvfppgMmaVmbyHCA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejscisaamNEwZLvfppgMmaVmbyHCA;
}
constexpr void Rewired::Utils::Classes::SerializedMethod::__cordl_internal_set_ejscisaamNEwZLvfppgMmaVmbyHCA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ejscisaamNEwZLvfppgMmaVmbyHCA = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::TypeWrapper>*& Rewired::Utils::Classes::SerializedMethod::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::TypeWrapper>* const& Rewired::Utils::Classes::SerializedMethod::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void Rewired::Utils::Classes::SerializedMethod::__cordl_internal_set__data(::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::TypeWrapper>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper& Rewired::Utils::Classes::SerializedMethod::__cordl_internal_get__result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
constexpr ::Rewired::Utils::Classes::Data::TypeWrapper const& Rewired::Utils::Classes::SerializedMethod::__cordl_internal_get__result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
constexpr void Rewired::Utils::Classes::SerializedMethod::__cordl_internal_set__result(::Rewired::Utils::Classes::Data::TypeWrapper  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____result = value;
}
constexpr bool& Rewired::Utils::Classes::SerializedMethod::__cordl_internal_get__resultIsValid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultIsValid;
}
constexpr bool const& Rewired::Utils::Classes::SerializedMethod::__cordl_internal_get__resultIsValid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultIsValid;
}
constexpr void Rewired::Utils::Classes::SerializedMethod::__cordl_internal_set__resultIsValid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resultIsValid = value;
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper_DataType Rewired::Utils::Classes::SerializedMethod::get_ResultType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper_DataType>(this, ___internal_method);
}
inline int32_t Rewired::Utils::Classes::SerializedMethod::get_DataCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"get_DataCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::SerializedMethod::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(this, ___internal_method);
}
inline bool Rewired::Utils::Classes::SerializedMethod::get_ResultIsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"get_ResultIsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::TypeWrapper Rewired::Utils::Classes::SerializedMethod::GetData(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"GetData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::TypeWrapper>(this, ___internal_method, index);
}
inline void Rewired::Utils::Classes::SerializedMethod::AddData(uint8_t  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Rewired::Utils::Classes::SerializedMethod::AddData(int8_t  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Rewired::Utils::Classes::SerializedMethod::AddData(char16_t  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Rewired::Utils::Classes::SerializedMethod::AddData(int32_t  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Rewired::Utils::Classes::SerializedMethod::AddData(uint32_t  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Rewired::Utils::Classes::SerializedMethod::AddData(int64_t  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Rewired::Utils::Classes::SerializedMethod::AddData(uint64_t  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Rewired::Utils::Classes::SerializedMethod::AddData(float_t  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Rewired::Utils::Classes::SerializedMethod::AddData(double_t  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Rewired::Utils::Classes::SerializedMethod::AddData(bool  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Rewired::Utils::Classes::SerializedMethod::AddData(::StringW  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Rewired::Utils::Classes::SerializedMethod::AddData(::System::Object*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Rewired::Utils::Classes::SerializedMethod::AddData(::Rewired::Utils::Classes::Data::TypeWrapper  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"AddData", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::TypeWrapper>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Rewired::Utils::Classes::SerializedMethod::ClearData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"ClearData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::SerializedMethod::ClearResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"ClearResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Utils::Classes::SerializedMethod::Process()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::SerializedMethod::CzrbgnAUbVqgoaYbCcNPfIOEUGJn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {"CzrbgnAUbVqgoaYbCcNPfIOEUGJn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::SerializedMethod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::SerializedMethod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::SerializedMethod* Rewired::Utils::Classes::SerializedMethod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::SerializedMethod*>());
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::SerializedMethod::SerializedMethod()   {
}
