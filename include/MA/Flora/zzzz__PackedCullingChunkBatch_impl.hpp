#pragma once
// IWYU pragma private; include "MA/Flora/PackedCullingChunkBatch.hpp"
#include "MA/Flora/zzzz__PackedCullingChunkBatch_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::PackedCullingChunkBatch.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::PackedCullingChunkBatch (*)()>(&::MA::Flora::PackedCullingChunkBatch::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::PackedCullingChunkBatch.Indirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::PackedCullingChunkBatch (*)(uint32_t, int32_t)>(&::MA::Flora::PackedCullingChunkBatch::Indirect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814c07b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(),
                        {"Indirect", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::PackedCullingChunkBatch.Compressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::PackedCullingChunkBatch (*)(uint32_t)>(&::MA::Flora::PackedCullingChunkBatch::Compressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814c0730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(),
                        {"Compressed", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::PackedCullingChunkBatch.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::PackedCullingChunkBatch::*)(::MA::Flora::PackedCullingChunkBatch)>(&::MA::Flora::PackedCullingChunkBatch::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::PackedCullingChunkBatch>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::PackedCullingChunkBatch.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::PackedCullingChunkBatch::*)(::System::Object*)>(&::MA::Flora::PackedCullingChunkBatch::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814c0740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(),
                    {::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::PackedCullingChunkBatch.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::PackedCullingChunkBatch::*)()>(&::MA::Flora::PackedCullingChunkBatch::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(),
                    {::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::PackedCullingChunkBatch.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::PackedCullingChunkBatch::*)()>(&::MA::Flora::PackedCullingChunkBatch::ToString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814c07c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(),
                    {::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::MA::Flora::PackedCullingChunkBatch MA::Flora::PackedCullingChunkBatch::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::PackedCullingChunkBatch>(nullptr, ___internal_method);
}
inline ::MA::Flora::PackedCullingChunkBatch MA::Flora::PackedCullingChunkBatch::Indirect(uint32_t  indirectOffset, int32_t  indirectCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(),
                        {"Indirect", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::PackedCullingChunkBatch>(nullptr, ___internal_method, indirectOffset, indirectCount);
}
inline ::MA::Flora::PackedCullingChunkBatch MA::Flora::PackedCullingChunkBatch::Compressed(uint32_t  instanceOffsetStart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(),
                        {"Compressed", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::PackedCullingChunkBatch>(nullptr, ___internal_method, instanceOffsetStart);
}
inline bool MA::Flora::PackedCullingChunkBatch::Equals(::MA::Flora::PackedCullingChunkBatch  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::PackedCullingChunkBatch>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::PackedCullingChunkBatch::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::PackedCullingChunkBatch::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::PackedCullingChunkBatch::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::PackedCullingChunkBatch>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::PackedCullingChunkBatch>"
constexpr  MA::Flora::PackedCullingChunkBatch::operator ::System::IEquatable_1<::MA::Flora::PackedCullingChunkBatch>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::PackedCullingChunkBatch>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::PackedCullingChunkBatch>"
constexpr ::System::IEquatable_1<::MA::Flora::PackedCullingChunkBatch>* MA::Flora::PackedCullingChunkBatch::i___System__IEquatable_1___MA__Flora__PackedCullingChunkBatch_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::PackedCullingChunkBatch>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::PackedCullingChunkBatch::PackedCullingChunkBatch(uint32_t  data) noexcept  {
this->data = data;
}
// Ctor Parameters []
constexpr ::MA::Flora::PackedCullingChunkBatch::PackedCullingChunkBatch()   {
}
