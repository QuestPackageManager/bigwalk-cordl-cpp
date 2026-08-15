#pragma once
// IWYU pragma private; include "MA/Flora/CellBucketKey.hpp"
#include "MA/Flora/zzzz__ArchetypeIndex_impl.hpp"
#include "MA/Flora/zzzz__CellIndex_impl.hpp"
#include "MA/Flora/zzzz__CellBucketKey_def.hpp"
#include "MA/Flora/zzzz__ArchetypeIndex_def.hpp"
#include "MA/Flora/zzzz__CellIndex_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::CellBucketKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CellBucketKey::*)(::MA::Flora::ArchetypeIndex, ::MA::Flora::CellIndex)>(&::MA::Flora::CellBucketKey::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a47e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketKey>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::CellIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellBucketKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CellBucketKey::*)(::MA::Flora::CellBucketKey)>(&::MA::Flora::CellBucketKey::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18149c5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::CellBucketKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellBucketKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::CellBucketKey::*)(::System::Object*)>(&::MA::Flora::CellBucketKey::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18149c600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::CellBucketKey>(),
                    {::i2c::class_of<::MA::Flora::CellBucketKey>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellBucketKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::CellBucketKey::*)()>(&::MA::Flora::CellBucketKey::GetHashCode)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x180e0c2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::CellBucketKey>(),
                    {::i2c::class_of<::MA::Flora::CellBucketKey>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CellBucketKey.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::CellBucketKey::*)()>(&::MA::Flora::CellBucketKey::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18149c690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::CellBucketKey>(),
                    {::i2c::class_of<::MA::Flora::CellBucketKey>(), 3}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::CellBucketKey::_ctor(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::CellIndex  cell)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketKey>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::CellIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, archetype, cell);
}
inline bool MA::Flora::CellBucketKey::Equals(::MA::Flora::CellBucketKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CellBucketKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::CellBucketKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::CellBucketKey::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::CellBucketKey>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::CellBucketKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::CellBucketKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::CellBucketKey::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::CellBucketKey>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::CellBucketKey>"
constexpr  MA::Flora::CellBucketKey::operator ::System::IEquatable_1<::MA::Flora::CellBucketKey>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::CellBucketKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::CellBucketKey>"
constexpr ::System::IEquatable_1<::MA::Flora::CellBucketKey>* MA::Flora::CellBucketKey::i___System__IEquatable_1___MA__Flora__CellBucketKey_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::CellBucketKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Archetype", ty: "::MA::Flora::ArchetypeIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "Cell", ty: "::MA::Flora::CellIndex", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CellBucketKey::CellBucketKey(::MA::Flora::ArchetypeIndex  Archetype, ::MA::Flora::CellIndex  Cell) noexcept  {
this->Archetype = Archetype;
this->Cell = Cell;
}
// Ctor Parameters []
constexpr ::MA::Flora::CellBucketKey::CellBucketKey()   {
}
