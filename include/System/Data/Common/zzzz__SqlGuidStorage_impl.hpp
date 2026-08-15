#pragma once
// IWYU pragma private; include "System/Data/Common/SqlGuidStorage.hpp"
#include "System/Data/Common/zzzz__DataStorage_impl.hpp"
#include "System/Data/SqlTypes/zzzz__SqlGuid_impl.hpp"
#include "System/Data/Common/zzzz__SqlGuidStorage_def.hpp"
#include "System/Collections/zzzz__BitArray_def.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlGuidStorage::*)(::System::Data::DataColumn*)>(&::System::Data::Common::SqlGuidStorage::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181c05e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage.Aggregate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlGuidStorage::*)(::ArrayW<int32_t>, ::System::Data::AggregateType)>(&::System::Data::Common::SqlGuidStorage::Aggregate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181c058f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                    {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::SqlGuidStorage::*)(int32_t, int32_t)>(&::System::Data::Common::SqlGuidStorage::Compare)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181c05a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                    {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage.CompareValueTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Common::SqlGuidStorage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::SqlGuidStorage::CompareValueTo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181c05a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                    {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage.ConvertValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlGuidStorage::*)(::System::Object*)>(&::System::Data::Common::SqlGuidStorage::ConvertValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181c05a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                    {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlGuidStorage::*)(int32_t, int32_t)>(&::System::Data::Common::SqlGuidStorage::Copy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181bf9aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                    {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlGuidStorage::*)(int32_t)>(&::System::Data::Common::SqlGuidStorage::Get)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181c05d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                    {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage.IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Common::SqlGuidStorage::*)(int32_t)>(&::System::Data::Common::SqlGuidStorage::IsNull)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181bf9b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                    {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlGuidStorage::*)(int32_t, ::System::Object*)>(&::System::Data::Common::SqlGuidStorage::Set)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181c05e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                    {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage.SetCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlGuidStorage::*)(int32_t)>(&::System::Data::Common::SqlGuidStorage::SetCapacity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181c05d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                    {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage.ConvertXmlToObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlGuidStorage::*)(::StringW)>(&::System::Data::Common::SqlGuidStorage::ConvertXmlToObject)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181c05ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                    {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage.ConvertObjectToXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::Common::SqlGuidStorage::*)(::System::Object*)>(&::System::Data::Common::SqlGuidStorage::ConvertObjectToXml)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181c04350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                    {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage.GetEmptyStorage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::Common::SqlGuidStorage::*)(int32_t)>(&::System::Data::Common::SqlGuidStorage::GetEmptyStorage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181c05cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                    {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage.CopyValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlGuidStorage::*)(int32_t, ::System::Object*, ::System::Collections::BitArray*, int32_t)>(&::System::Data::Common::SqlGuidStorage::CopyValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181c05c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                    {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Common::SqlGuidStorage.SetStorage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Common::SqlGuidStorage::*)(::System::Object*, ::System::Collections::BitArray*)>(&::System::Data::Common::SqlGuidStorage::SetStorage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181c05db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                    {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 20}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Data::SqlTypes::SqlGuid>& System::Data::Common::SqlGuidStorage::__cordl_internal_get__values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr ::ArrayW<::System::Data::SqlTypes::SqlGuid> const& System::Data::Common::SqlGuidStorage::__cordl_internal_get__values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr void System::Data::Common::SqlGuidStorage::__cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlGuid>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____values = value;
}
inline void System::Data::Common::SqlGuidStorage::_ctor(::System::Data::DataColumn*  column)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline ::System::Object* System::Data::Common::SqlGuidStorage::Aggregate(::ArrayW<int32_t>  records, ::System::Data::AggregateType  kind)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, records, kind);
}
inline int32_t System::Data::Common::SqlGuidStorage::Compare(int32_t  recordNo1, int32_t  recordNo2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo1, recordNo2);
}
inline int32_t System::Data::Common::SqlGuidStorage::CompareValueTo(int32_t  recordNo, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, recordNo, value);
}
inline ::System::Object* System::Data::Common::SqlGuidStorage::ConvertValue(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value);
}
inline void System::Data::Common::SqlGuidStorage::Copy(int32_t  recordNo1, int32_t  recordNo2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recordNo1, recordNo2);
}
inline ::System::Object* System::Data::Common::SqlGuidStorage::Get(int32_t  record)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, record);
}
inline bool System::Data::Common::SqlGuidStorage::IsNull(int32_t  record)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record);
}
inline void System::Data::Common::SqlGuidStorage::Set(int32_t  record, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, value);
}
inline void System::Data::Common::SqlGuidStorage::SetCapacity(int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::System::Object* System::Data::Common::SqlGuidStorage::ConvertXmlToObject(::StringW  s)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s);
}
inline ::StringW System::Data::Common::SqlGuidStorage::ConvertObjectToXml(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::System::Object* System::Data::Common::SqlGuidStorage::GetEmptyStorage(int32_t  recordCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordCount);
}
inline void System::Data::Common::SqlGuidStorage::CopyValue(int32_t  record, ::System::Object*  store, ::System::Collections::BitArray*  nullbits, int32_t  storeIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, store, nullbits, storeIndex);
}
inline void System::Data::Common::SqlGuidStorage::SetStorage(::System::Object*  store, ::System::Collections::BitArray*  nullbits)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::Common::SqlGuidStorage*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store, nullbits);
}
inline ::System::Data::Common::SqlGuidStorage* System::Data::Common::SqlGuidStorage::New_ctor(::System::Data::DataColumn*  column)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Common::SqlGuidStorage*>(column));
}
// Ctor Parameters []
constexpr ::System::Data::Common::SqlGuidStorage::SqlGuidStorage()   {
}
