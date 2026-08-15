#pragma once
// IWYU pragma private; include "UnityEngine/MeshLodRange.hpp"
#include "UnityEngine/zzzz__MeshLodRange_def.hpp"
//  Writing Method size for method: ::UnityEngine::MeshLodRange.get_indexStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::MeshLodRange::*)()>(&::UnityEngine::MeshLodRange::get_indexStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MeshLodRange>(),
                        {"get_indexStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshLodRange.get_indexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::MeshLodRange::*)()>(&::UnityEngine::MeshLodRange::get_indexCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MeshLodRange>(),
                        {"get_indexCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshLodRange.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::MeshLodRange::*)()>(&::UnityEngine::MeshLodRange::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822568f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::MeshLodRange>(),
                    {::i2c::class_of<::UnityEngine::MeshLodRange>(), 3}
                ));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::MeshLodRange::get_indexStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MeshLodRange>(),
                        {"get_indexStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t UnityEngine::MeshLodRange::get_indexCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MeshLodRange>(),
                        {"get_indexCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::MeshLodRange::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::MeshLodRange>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_IndexStart", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IndexCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::MeshLodRange::MeshLodRange(uint32_t  m_IndexStart, uint32_t  m_IndexCount) noexcept  {
this->m_IndexStart = m_IndexStart;
this->m_IndexCount = m_IndexCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::MeshLodRange::MeshLodRange()   {
}
