#pragma once
// IWYU pragma private; include "MA/Flora/InstanceInSourceRecord.hpp"
#include "MA/Flora/zzzz__SourceRecordIndex_impl.hpp"
#include "MA/Flora/zzzz__InstanceInSourceRecord_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::MA::Flora::InstanceInSourceRecord.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::InstanceInSourceRecord (*)()>(&::MA::Flora::InstanceInSourceRecord::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInSourceRecord>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInSourceRecord.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::InstanceInSourceRecord::*)(::MA::Flora::InstanceInSourceRecord)>(&::MA::Flora::InstanceInSourceRecord::CompareTo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814822e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInSourceRecord>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::InstanceInSourceRecord>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInSourceRecord.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::InstanceInSourceRecord::*)()>(&::MA::Flora::InstanceInSourceRecord::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18147c820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::InstanceInSourceRecord>(),
                    {::i2c::class_of<::MA::Flora::InstanceInSourceRecord>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInSourceRecord.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::InstanceInSourceRecord::*)(::MA::Flora::InstanceInSourceRecord)>(&::MA::Flora::InstanceInSourceRecord::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181482330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInSourceRecord>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::InstanceInSourceRecord>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInSourceRecord.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::InstanceInSourceRecord::*)()>(&::MA::Flora::InstanceInSourceRecord::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181482380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::InstanceInSourceRecord>(),
                    {::i2c::class_of<::MA::Flora::InstanceInSourceRecord>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::MA::Flora::InstanceInSourceRecord MA::Flora::InstanceInSourceRecord::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInSourceRecord>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::InstanceInSourceRecord>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::InstanceInSourceRecord::CompareTo(::MA::Flora::InstanceInSourceRecord  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInSourceRecord>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::InstanceInSourceRecord>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::InstanceInSourceRecord::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::InstanceInSourceRecord>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::InstanceInSourceRecord::Equals(::MA::Flora::InstanceInSourceRecord  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInSourceRecord>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::InstanceInSourceRecord>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW MA::Flora::InstanceInSourceRecord::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::InstanceInSourceRecord>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::InstanceInSourceRecord>"
constexpr  MA::Flora::InstanceInSourceRecord::operator ::System::IComparable_1<::MA::Flora::InstanceInSourceRecord>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::InstanceInSourceRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::InstanceInSourceRecord>"
constexpr ::System::IComparable_1<::MA::Flora::InstanceInSourceRecord>* MA::Flora::InstanceInSourceRecord::i___System__IComparable_1___MA__Flora__InstanceInSourceRecord_()  {
return static_cast<::System::IComparable_1<::MA::Flora::InstanceInSourceRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::InstanceInSourceRecord>"
constexpr  MA::Flora::InstanceInSourceRecord::operator ::System::IEquatable_1<::MA::Flora::InstanceInSourceRecord>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::InstanceInSourceRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::InstanceInSourceRecord>"
constexpr ::System::IEquatable_1<::MA::Flora::InstanceInSourceRecord>* MA::Flora::InstanceInSourceRecord::i___System__IEquatable_1___MA__Flora__InstanceInSourceRecord_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::InstanceInSourceRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "SourceRecord", ty: "::MA::Flora::SourceRecordIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexInList", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceInSourceRecord::InstanceInSourceRecord(::MA::Flora::SourceRecordIndex  SourceRecord, int32_t  IndexInList) noexcept  {
this->SourceRecord = SourceRecord;
this->IndexInList = IndexInList;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceInSourceRecord::InstanceInSourceRecord()   {
}
