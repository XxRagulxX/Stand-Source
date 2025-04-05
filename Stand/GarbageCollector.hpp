#pragma once

#include <atomic>

namespace Stand
{
	struct GarbageCollected
	{
		std::atomic<GarbageCollected*> next;

		virtual ~GarbageCollected() noexcept = default;
		virtual bool canBeDeleted() noexcept = 0;
	};

	struct GarbageCollector
	{
		std::atomic<GarbageCollected*> head{};

		[[nodiscard]] size_t getNumObjects() const noexcept;
		void add(GarbageCollected* node) noexcept;
		size_t tick() noexcept;
		void deinit() noexcept;
	};
}
